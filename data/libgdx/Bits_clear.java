/**
 * Clears the entire bitset
 */
public void clear() {
    long[] bits = this.bits;
    int length = bits.length;
    for (int i = 0; i < length; i++) {
        bits[i] = 0L;
    }
}
