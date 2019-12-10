/**
 * See {@link #same(Attributes, boolean)}
 * @return True if this collection contains the same attributes (but not values) as the other.
 */
public final boolean same(final Attributes other) {
    return same(other, false);
}
