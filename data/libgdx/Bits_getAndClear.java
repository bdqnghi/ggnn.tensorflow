/**
 * Returns the bit at the given index and clears it in one go.
 * @param index the index of the bit
 * @return whether the bit was set before invocation
 * @throws ArrayIndexOutOfBoundsException if index < 0
 */
public boolean getAndClear(int index) {
    final int word = index >>> 6;
    if (word >= bits.length)
        return false;
    long oldBits = bits[word];
    bits[word] &= ~(1L << (index & 0x3F));
    return bits[word] != oldBits;
}
