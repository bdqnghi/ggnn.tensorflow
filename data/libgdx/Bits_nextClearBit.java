/**
 * Returns the index of the first bit that is set to false that occurs on or after the specified starting index.
 */
public int nextClearBit(int fromIndex) {
    long[] bits = this.bits;
    int word = fromIndex >>> 6;
    int bitsLength = bits.length;
    if (word >= bitsLength)
        return bits.length << 6;
    long bitsAtWord = bits[word];
    for (int i = fromIndex & 0x3f; i < 64; i++) {
        if ((bitsAtWord & (1L << (i & 0x3F))) == 0L) {
            return (word << 6) + i;
        }
    }
    for (word++; word < bitsLength; word++) {
        if (word == 0) {
            return word << 6;
        }
        bitsAtWord = bits[word];
        for (int i = 0; i < 64; i++) {
            if ((bitsAtWord & (1L << (i & 0x3F))) == 0L) {
                return (word << 6) + i;
            }
        }
    }
    return bits.length << 6;
}
