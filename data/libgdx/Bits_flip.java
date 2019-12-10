/**
 * @param index the index of the bit to flip
 */
public void flip(int index) {
    final int word = index >>> 6;
    checkCapacity(word);
    bits[word] ^= 1L << (index & 0x3F);
}
