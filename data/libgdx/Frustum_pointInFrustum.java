/**
 * Returns whether the point is in the frustum.
 *
 * @param x The X coordinate of the point
 * @param y The Y coordinate of the point
 * @param z The Z coordinate of the point
 * @return Whether the point is in the frustum.
 */
public boolean pointInFrustum(float x, float y, float z) {
    for (int i = 0; i < planes.length; i++) {
        PlaneSide result = planes[i].testPoint(x, y, z);
        if (result == PlaneSide.Back)
            return false;
    }
    return true;
}
