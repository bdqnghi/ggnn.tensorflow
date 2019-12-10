/**
 * Returns a pseudo-random, uniformly distributed {@code boolean } value from this random number generator's sequence.
 * <p>
 * This implementation uses {@link #nextLong()} internally.
 */
@Override
public boolean nextBoolean() {
    return (nextLong() & 1) != 0;
}
