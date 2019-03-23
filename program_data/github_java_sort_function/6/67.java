

package io.mycat.memory.unsafe.utils.sort;


import io.mycat.memory.unsafe.Platform;
import io.mycat.memory.unsafe.array.LongArray;

public class RadixSort {

  
  public static int sort(
          LongArray array, int numRecords, int startByteIndex, int endByteIndex,
          boolean desc, boolean signed) {
    assert startByteIndex >= 0 : "startByteIndex (" + startByteIndex + ") should >= 0";
    assert endByteIndex <= 7 : "endByteIndex (" + endByteIndex + ") should <= 7";
    assert endByteIndex > startByteIndex;
    assert numRecords * 2 <= array.size();
    int inIndex = 0;
    int outIndex = numRecords;
    if (numRecords > 0) {
      long[][] counts = getCounts(array, numRecords, startByteIndex, endByteIndex);
      for (int i = startByteIndex; i <= endByteIndex; i++) {
        if (counts[i] != null) {
          sortAtByte(
            array, numRecords, counts[i], i, inIndex, outIndex,
            desc, signed && i == endByteIndex);
          int tmp = inIndex;
          inIndex = outIndex;
          outIndex = tmp;
        }
      }
    }
    return inIndex;
  }

  
  private static void sortAtByte(
      LongArray array, int numRecords, long[] counts, int byteIdx, int inIndex, int outIndex,
      boolean desc, boolean signed) {
    assert counts.length == 256;
    long[] offsets = transformCountsToOffsets(
      counts, numRecords, array.getBaseOffset() + outIndex * 8, 8, desc, signed);
    Object baseObject = array.getBaseObject();
    long baseOffset = array.getBaseOffset() + inIndex * 8;
    long maxOffset = baseOffset + numRecords * 8;
    for (long offset = baseOffset; offset < maxOffset; offset += 8) {
      long value = Platform.getLong(baseObject, offset);
      int bucket = (int)((value >>> (byteIdx * 8)) & 0xff);
      Platform.putLong(baseObject, offsets[bucket], value);
      offsets[bucket] += 8;
    }
  }

  
  private static long[][] getCounts(
      LongArray array, int numRecords, int startByteIndex, int endByteIndex) {
    long[][] counts = new long[8][];
    
    
    long bitwiseMax = 0;
    long bitwiseMin = -1L;
    long maxOffset = array.getBaseOffset() + numRecords * 8;
    Object baseObject = array.getBaseObject();
    for (long offset = array.getBaseOffset(); offset < maxOffset; offset += 8) {
      long value = Platform.getLong(baseObject, offset);
      bitwiseMax |= value;
      bitwiseMin &= value;
    }
    long bitsChanged = bitwiseMin ^ bitwiseMax;
    
    for (int i = startByteIndex; i <= endByteIndex; i++) {
      if (((bitsChanged >>> (i * 8)) & 0xff) != 0) {
        counts[i] = new long[256];
        
        for (long offset = array.getBaseOffset(); offset < maxOffset; offset += 8) {
          counts[i][(int)((Platform.getLong(baseObject, offset) >>> (i * 8)) & 0xff)]++;
        }
      }
    }
    return counts;
  }

  
  private static long[] transformCountsToOffsets(
      long[] counts, int numRecords, long outputOffset, int bytesPerRecord,
      boolean desc, boolean signed) {
    assert counts.length == 256;
    int start = signed ? 128 : 0;  
    if (desc) {
      int pos = numRecords;
      for (int i = start; i < start + 256; i++) {
        pos -= counts[i & 0xff];
        counts[i & 0xff] = outputOffset + pos * bytesPerRecord;
      }
    } else {
      int pos = 0;
      for (int i = start; i < start + 256; i++) {
        long tmp = counts[i & 0xff];
        counts[i & 0xff] = outputOffset + pos * bytesPerRecord;
        pos += tmp;
      }
    }
    return counts;
  }

  
  public static int sortKeyPrefixArray(
      LongArray array,
      int numRecords,
      int startByteIndex,
      int endByteIndex,
      boolean desc,
      boolean signed) {
    assert startByteIndex >= 0 : "startByteIndex (" + startByteIndex + ") should >= 0";
    assert endByteIndex <= 7 : "endByteIndex (" + endByteIndex + ") should <= 7";
    assert endByteIndex > startByteIndex;
    assert numRecords * 4 <= array.size();
    int inIndex = 0;
    int outIndex = numRecords * 2;
    if (numRecords > 0) {
      long[][] counts = getKeyPrefixArrayCounts(array, numRecords, startByteIndex, endByteIndex);
      for (int i = startByteIndex; i <= endByteIndex; i++) {
        if (counts[i] != null) {
          sortKeyPrefixArrayAtByte(
            array, numRecords, counts[i], i, inIndex, outIndex,
            desc, signed && i == endByteIndex);
          int tmp = inIndex;
          inIndex = outIndex;
          outIndex = tmp;
        }
      }
    }
    return inIndex;
  }

  
  private static long[][] getKeyPrefixArrayCounts(
      LongArray array, int numRecords, int startByteIndex, int endByteIndex) {
    long[][] counts = new long[8][];
    long bitwiseMax = 0;
    long bitwiseMin = -1L;
    long limit = array.getBaseOffset() + numRecords * 16;
    Object baseObject = array.getBaseObject();
    for (long offset = array.getBaseOffset(); offset < limit; offset += 16) {
      long value = Platform.getLong(baseObject, offset + 8);
      bitwiseMax |= value;
      bitwiseMin &= value;
    }
    long bitsChanged = bitwiseMin ^ bitwiseMax;
    for (int i = startByteIndex; i <= endByteIndex; i++) {
      if (((bitsChanged >>> (i * 8)) & 0xff) != 0) {
        counts[i] = new long[256];
        for (long offset = array.getBaseOffset(); offset < limit; offset += 16) {
          counts[i][(int)((Platform.getLong(baseObject, offset + 8) >>> (i * 8)) & 0xff)]++;
        }
      }
    }
    return counts;
  }

  
  private static void sortKeyPrefixArrayAtByte(
      LongArray array, int numRecords, long[] counts, int byteIdx, int inIndex, int outIndex,
      boolean desc, boolean signed) {
    assert counts.length == 256;
    long[] offsets = transformCountsToOffsets(
      counts, numRecords, array.getBaseOffset() + outIndex * 8, 16, desc, signed);
    Object baseObject = array.getBaseObject();
    long baseOffset = array.getBaseOffset() + inIndex * 8;
    long maxOffset = baseOffset + numRecords * 16;
    for (long offset = baseOffset; offset < maxOffset; offset += 16) {
      long key = Platform.getLong(baseObject, offset);
      long prefix = Platform.getLong(baseObject, offset + 8);
      int bucket = (int)((prefix >>> (byteIdx * 8)) & 0xff);
      long dest = offsets[bucket];
      Platform.putLong(baseObject, dest, key);
      Platform.putLong(baseObject, dest + 8, prefix);
      offsets[bucket] += 16;
    }
  }
}
