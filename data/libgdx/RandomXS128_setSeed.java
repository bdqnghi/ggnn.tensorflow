/**
 * Sets the internal seed of this generator based on the given {@code long} value.
 * <p>
 * The given seed is passed twice through a hash function. This way, if the user passes a small value we avoid the short
 * irregular transient associated with states having a very small number of bits set.
 * @param seed a nonzero seed for this generator (if zero, the generator will be seeded with {@link Long#MIN_VALUE}).
 */
@Override
public void setSeed(final long seed) {
    long seed0 = murmurHash3(seed == 0 ? Long.MIN_VALUE : seed);
    setState(seed0, murmurHash3(seed0));
}
