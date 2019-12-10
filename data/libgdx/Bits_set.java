/**
 * @param index the index of the bit to set
 * @throws ArrayIndexOutOfBoundsException if index < 0
 */
public void set(int index) {
    final int word = index >>> 6;
    checkCapacity(word);
    bits[word] |= 1L << (index & 0x3F);
}
