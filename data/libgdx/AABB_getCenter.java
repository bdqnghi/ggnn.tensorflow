/**
 * Get the center of the AABB
 *
 * @return
 */
public final Vec2 getCenter() {
    final Vec2 center = new Vec2(lowerBound);
    center.addLocal(upperBound);
    center.mulLocal(.5f);
    return center;
}
