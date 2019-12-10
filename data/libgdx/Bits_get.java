/**
 * @param index the index of the bit
 * @return whether the bit is set
 * @throws ArrayIndexOutOfBoundsException if index < 0
 */
public boolean get(int index) {
    final int word = index >>> 6;
    if (word >= bits.length)
        return false;
    return (bits[word] & (1L << (index & 0x3F))) != 0L;
}
