/**
 * Get the extents of the AABB (half-widths).
 *
 * @return
 */
public final Vec2 getExtents() {
    final Vec2 center = new Vec2(upperBound);
    center.subLocal(lowerBound);
    center.mulLocal(.5f);
    return center;
}
