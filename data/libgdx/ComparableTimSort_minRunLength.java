/**
 * Returns the minimum acceptable run length for an array of the specified length. Natural runs shorter than this will be
 * extended with {@link #binarySort}.
 *
 * Roughly speaking, the computation is:
 *
 * If n < MIN_MERGE, return n (it's too small to bother with fancy stuff). Else if n is an exact power of 2, return
 * MIN_MERGE/2. Else return an int k, MIN_MERGE/2 <= k <= MIN_MERGE, such that n/k is close to, but strictly less than, an
 * exact power of 2.
 *
 * For the rationale, see listsort.txt.
 *
 * @param n the length of the array to be sorted
 * @return the length of the minimum run to be merged
 */
private static int minRunLength(int n) {
    if (DEBUG)
        assert n >= 0;
    // Becomes 1 if any 1 bits are shifted off
    int r = 0;
    while (n >= MIN_MERGE) {
        r |= (n & 1);
        n >>= 1;
    }
    return n + r;
}
