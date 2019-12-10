/**
 * Returns the "logical size" of this bitset: the index of the highest set bit in the bitset plus one. Returns zero if the
 * bitset contains no set bits.
 *
 * @return the logical size of this bitset
 */
public int length() {
    long[] bits = this.bits;
    for (int word = bits.length - 1; word >= 0; --word) {
        long bitsAtWord = bits[word];
        if (bitsAtWord != 0) {
            for (int bit = 63; bit >= 0; --bit) {
                if ((bitsAtWord & (1L << (bit & 0x3F))) != 0L) {
                    return (word << 6) + bit + 1;
                }
            }
        }
    }
    return 0;
}
