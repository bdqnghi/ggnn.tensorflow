/**
 * This protected method is final because, contrary to the superclass, it's not used anymore by the other methods.
 */
@Override
protected final int next(int bits) {
    return (int) (nextLong() & ((1L << bits) - 1));
}
