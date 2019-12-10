/**
 * Combines another aabb with this one
 *
 * @param aabb
 */
public final void combine(final AABB aabb) {
    lowerBound.x = lowerBound.x < aabb.lowerBound.x ? lowerBound.x : aabb.lowerBound.x;
    lowerBound.y = lowerBound.y < aabb.lowerBound.y ? lowerBound.y : aabb.lowerBound.y;
    upperBound.x = upperBound.x > aabb.upperBound.x ? upperBound.x : aabb.upperBound.x;
    upperBound.y = upperBound.y > aabb.upperBound.y ? upperBound.y : aabb.upperBound.y;
}
