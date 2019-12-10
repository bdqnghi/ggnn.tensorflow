/**
 * Performs a logical <b>AND</b> of this target bit set with the argument bit set. This bit set is modified so that each bit in
 * it has the value true if and only if it both initially had the value true and the corresponding bit in the bit set argument
 * also had the value true.
 * @param other a bit set
 */
public void and(Bits other) {
    int commonWords = Math.min(bits.length, other.bits.length);
    for (int i = 0; commonWords > i; i++) {
        bits[i] &= other.bits[i];
    }
    if (bits.length > commonWords) {
        for (int i = commonWords, s = bits.length; s > i; i++) {
            bits[i] = 0L;
        }
    }
}
