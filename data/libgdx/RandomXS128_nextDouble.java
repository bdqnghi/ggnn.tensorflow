/**
 * Returns a pseudo-random, uniformly distributed {@code double} value between 0.0 and 1.0 from this random number generator's
 * sequence.
 * <p>
 * This implementation uses {@link #nextLong()} internally.
 */
@Override
public double nextDouble() {
    return (nextLong() >>> 11) * NORM_DOUBLE;
}
