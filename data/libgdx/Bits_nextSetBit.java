/**
 * Returns the index of the first bit that is set to true that occurs on or after the specified starting index. If no such bit
 * exists then -1 is returned.
 */
public int nextSetBit(int fromIndex) {
    long[] bits = this.bits;
    int word = fromIndex >>> 6;
    int bitsLength = bits.length;
    if (word >= bitsLength)
        return -1;
    long bitsAtWord = bits[word];
    if (bitsAtWord != 0) {
        for (int i = fromIndex & 0x3f; i < 64; i++) {
            if ((bitsAtWord & (1L << (i & 0x3F))) != 0L) {
                return (word << 6) + i;
            }
        }
    }
    for (word++; word < bitsLength; word++) {
        if (word != 0) {
            bitsAtWord = bits[word];
            if (bitsAtWord != 0) {
                for (int i = 0; i < 64; i++) {
                    if ((bitsAtWord & (1L << (i & 0x3F))) != 0L) {
                        return (word << 6) + i;
                    }
                }
            }
        }
    }
    return -1;
}
