/**
 * Returns a pseudo-random, uniformly distributed {@code long} value between 0 (inclusive) and the specified value (exclusive),
 * drawn from this random number generator's sequence. The algorithm used to generate the value guarantees that the result is
 * uniform, provided that the sequence of 64-bit values produced by this generator is.
 * <p>
 * This implementation uses {@link #nextLong()} internally.
 * @param n the positive bound on the random number to be returned.
 * @return the next pseudo-random {@code long} value between {@code 0} (inclusive) and {@code n} (exclusive).
 */
public long nextLong(final long n) {
    if (n <= 0)
        throw new IllegalArgumentException("n must be positive");
    for (; ; ) {
        final long bits = nextLong() >>> 1;
        final long value = bits % n;
        if (bits - value + (n - 1) >= 0)
            return value;
    }
}
