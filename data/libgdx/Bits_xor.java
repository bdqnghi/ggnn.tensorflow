/**
 * Performs a logical <b>XOR</b> of this bit set with the bit set argument. This bit set is modified so that a bit in it has
 * the value true if and only if one of the following statements holds:
 * <ul>
 * <li>The bit initially has the value true, and the corresponding bit in the argument has the value false.</li>
 * <li>The bit initially has the value false, and the corresponding bit in the argument has the value true.</li>
 * </ul>
 * @param other
 */
public void xor(Bits other) {
    int commonWords = Math.min(bits.length, other.bits.length);
    for (int i = 0; commonWords > i; i++) {
        bits[i] ^= other.bits[i];
    }
    if (commonWords < other.bits.length) {
        checkCapacity(other.bits.length);
        for (int i = commonWords, s = other.bits.length; s > i; i++) {
            bits[i] = other.bits[i];
        }
    }
}
