/**
 * Clears all of the bits in this bit set whose corresponding bit is set in the specified bit set.
 *
 * @param other a bit set
 */
public void andNot(Bits other) {
    for (int i = 0, j = bits.length, k = other.bits.length; i < j && i < k; i++) {
        bits[i] &= ~other.bits[i];
    }
}
