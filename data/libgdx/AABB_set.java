/**
 * Sets this object from the given object
 *
 * @param aabb the object to copy from
 */
public final void set(final AABB aabb) {
    Vec2 v = aabb.lowerBound;
    lowerBound.x = v.x;
    lowerBound.y = v.y;
    Vec2 v1 = aabb.upperBound;
    upperBound.x = v1.x;
    upperBound.y = v1.y;
}
