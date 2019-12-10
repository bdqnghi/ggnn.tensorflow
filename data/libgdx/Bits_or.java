/**
 * Performs a logical <b>OR</b> of this bit set with the bit set argument. This bit set is modified so that a bit in it has the
 * value true if and only if it either already had the value true or the corresponding bit in the bit set argument has the
 * value true.
 * @param other a bit set
 */
public void or(Bits other) {
    int commonWords = Math.min(bits.length, other.bits.length);
    for (int i = 0; commonWords > i; i++) {
        bits[i] |= other.bits[i];
    }
    if (commonWords < other.bits.length) {
        checkCapacity(other.bits.length);
        for (int i = commonWords, s = other.bits.length; s > i; i++) {
            bits[i] = other.bits[i];
        }
    }
}
