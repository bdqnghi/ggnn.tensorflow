/**
 * Returns a pseudo-random, uniformly distributed {@code float} value between 0.0 and 1.0 from this random number generator's
 * sequence.
 * <p>
 * This implementation uses {@link #nextLong()} internally.
 */
@Override
public float nextFloat() {
    return (float) ((nextLong() >>> 40) * NORM_FLOAT);
}
