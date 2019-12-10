/**
 * Returns a pseudo-random, uniformly distributed {@code int} value between 0 (inclusive) and the specified value (exclusive),
 * drawn from this random number generator's sequence.
 * <p>
 * This implementation uses {@link #nextLong()} internally.
 * @param n the positive bound on the random number to be returned.
 * @return the next pseudo-random {@code int} value between {@code 0} (inclusive) and {@code n} (exclusive).
 */
@Override
public int nextInt(final int n) {
    return (int) nextLong(n);
}
