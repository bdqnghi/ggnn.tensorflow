/**
 * Does this aabb contain the provided AABB.
 *
 * @return
 */
public final boolean contains(final AABB aabb) {
    // early
    return lowerBound.x <= aabb.lowerBound.x && lowerBound.y <= aabb.lowerBound.y && aabb.upperBound.x <= upperBound.x && aabb.upperBound.y <= upperBound.y;
}
