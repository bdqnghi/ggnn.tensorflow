/*
	 * Opens the specified file read-only. We memory-map the entire thing and
	 * close the file before returning.
	 */
void addPatchFile(String zipFileName) throws IOException {
    File file = new File(zipFileName);
    RandomAccessFile f = new RandomAccessFile(file, "r");
    long fileLength = f.length();
    if (fileLength < kEOCDLen) {
        f.close();
        throw new java.io.IOException();
    }
    long readAmount = kMaxEOCDSearch;
    if (readAmount > fileLength)
        readAmount = fileLength;
    /*
		 * Make sure this is a Zip archive.
		 */
    f.seek(0);
    int header = read4LE(f);
    if (header == kEOCDSignature) {
        Log.i(LOG_TAG, "Found Zip archive, but it looks empty");
        throw new IOException();
    } else if (header != kLFHSignature) {
        Log.v(LOG_TAG, "Not a Zip archive");
        throw new IOException();
    }
    /*
		 * Perform the traditional EOCD snipe hunt. We're searching for the End
		 * of Central Directory magic number, which appears at the start of the
		 * EOCD block. It's followed by 18 bytes of EOCD stuff and up to 64KB of
		 * archive comment. We need to read the last part of the file into a
		 * buffer, dig through it to find the magic number, parse some values
		 * out, and use those to determine the extent of the CD. We start by
		 * pulling in the last part of the file.
		 */
    long searchStart = fileLength - readAmount;
    f.seek(searchStart);
    ByteBuffer bbuf = ByteBuffer.allocate((int) readAmount);
    byte[] buffer = bbuf.array();
    f.readFully(buffer);
    bbuf.order(ByteOrder.LITTLE_ENDIAN);
    /*
		 * Scan backward for the EOCD magic. In an archive without a trailing
		 * comment, we'll find it on the first try. (We may want to consider
		 * doing an initial minimal read; if we don't find it, retry with a
		 * second read as above.)
		 */
    // EOCD == 0x50, 0x4b, 0x05, 0x06
    int eocdIdx;
    for (eocdIdx = buffer.length - kEOCDLen; eocdIdx >= 0; eocdIdx--) {
        if (buffer[eocdIdx] == 0x50 && bbuf.getInt(eocdIdx) == kEOCDSignature) {
            if (LOGV) {
                Log.v(LOG_TAG, "+++ Found EOCD at index: " + eocdIdx);
            }
            break;
        }
    }
    if (eocdIdx < 0) {
        Log.d(LOG_TAG, "Zip: EOCD not found, " + zipFileName + " is not zip");
    }
    /*
		 * Grab the CD offset and size, and the number of entries in the
		 * archive. After that, we can release our EOCD hunt buffer.
		 */
    int numEntries = bbuf.getShort(eocdIdx + kEOCDNumEntries);
    long dirSize = bbuf.getInt(eocdIdx + kEOCDSize) & 0xffffffffL;
    long dirOffset = bbuf.getInt(eocdIdx + kEOCDFileOffset) & 0xffffffffL;
    // Verify that they look reasonable.
    if (dirOffset + dirSize > fileLength) {
        Log.w(LOG_TAG, "bad offsets (dir " + dirOffset + ", size " + dirSize + ", eocd " + eocdIdx + ")");
        throw new IOException();
    }
    if (numEntries == 0) {
        Log.w(LOG_TAG, "empty archive?");
        throw new IOException();
    }
    if (LOGV) {
        Log.v(LOG_TAG, "+++ numEntries=" + numEntries + " dirSize=" + dirSize + " dirOffset=" + dirOffset);
    }
    MappedByteBuffer directoryMap = f.getChannel().map(FileChannel.MapMode.READ_ONLY, dirOffset, dirSize);
    directoryMap.order(ByteOrder.LITTLE_ENDIAN);
    byte[] tempBuf = new byte[0xffff];
    /*
		 * Walk through the central directory, adding entries to the hash table.
		 */
    int currentOffset = 0;
    /*
		 * Allocate the local directory information
		 */
    ByteBuffer buf = ByteBuffer.allocate(kLFHLen);
    buf.order(ByteOrder.LITTLE_ENDIAN);
    for (int i = 0; i < numEntries; i++) {
        if (directoryMap.getInt(currentOffset) != kCDESignature) {
            Log.w(LOG_TAG, "Missed a central dir sig (at " + currentOffset + ")");
            throw new IOException();
        }
        /* useful stuff from the directory entry */
        int fileNameLen = directoryMap.getShort(currentOffset + kCDENameLen) & 0xffff;
        int extraLen = directoryMap.getShort(currentOffset + kCDEExtraLen) & 0xffff;
        int commentLen = directoryMap.getShort(currentOffset + kCDECommentLen) & 0xffff;
        /* get the CDE filename */
        directoryMap.position(currentOffset + kCDELen);
        directoryMap.get(tempBuf, 0, fileNameLen);
        directoryMap.position(0);
        /* UTF-8 on Android */
        String str = new String(tempBuf, 0, fileNameLen);
        if (LOGV) {
            Log.v(LOG_TAG, "Filename: " + str);
        }
        ZipEntryRO ze = new ZipEntryRO(zipFileName, file, str);
        ze.mMethod = directoryMap.getShort(currentOffset + kCDEMethod) & 0xffff;
        ze.mWhenModified = directoryMap.getInt(currentOffset + kCDEModWhen) & 0xffffffffL;
        ze.mCRC32 = directoryMap.getLong(currentOffset + kCDECRC) & 0xffffffffL;
        ze.mCompressedLength = directoryMap.getLong(currentOffset + kCDECompLen) & 0xffffffffL;
        ze.mUncompressedLength = directoryMap.getLong(currentOffset + kCDEUncompLen) & 0xffffffffL;
        ze.mLocalHdrOffset = directoryMap.getInt(currentOffset + kCDELocalOffset) & 0xffffffffL;
        // set the offsets
        buf.clear();
        ze.setOffsetFromFile(f, buf);
        // put file into hash
        mHashMap.put(str, ze);
        // go to next directory entry
        currentOffset += kCDELen + fileNameLen + extraLen + commentLen;
    }
    if (LOGV) {
        Log.v(LOG_TAG, "+++ zip good scan " + numEntries + " entries");
    }
}
