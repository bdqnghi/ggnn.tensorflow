/**
 * Returns whether the given bounding box is in the frustum.
 * @return Whether the bounding box is in the frustum
 */
public boolean boundsInFrustum(float x, float y, float z, float halfWidth, float halfHeight, float halfDepth) {
    for (int i = 0, len2 = planes.length; i < len2; i++) {
        if (planes[i].testPoint(x + halfWidth, y + halfHeight, z + halfDepth) != PlaneSide.Back)
            continue;
        if (planes[i].testPoint(x + halfWidth, y + halfHeight, z - halfDepth) != PlaneSide.Back)
            continue;
        if (planes[i].testPoint(x + halfWidth, y - halfHeight, z + halfDepth) != PlaneSide.Back)
            continue;
        if (planes[i].testPoint(x + halfWidth, y - halfHeight, z - halfDepth) != PlaneSide.Back)
            continue;
        if (planes[i].testPoint(x - halfWidth, y + halfHeight, z + halfDepth) != PlaneSide.Back)
            continue;
        if (planes[i].testPoint(x - halfWidth, y + halfHeight, z - halfDepth) != PlaneSide.Back)
            continue;
        if (planes[i].testPoint(x - halfWidth, y - halfHeight, z + halfDepth) != PlaneSide.Back)
            continue;
        if (planes[i].testPoint(x - halfWidth, y - halfHeight, z - halfDepth) != PlaneSide.Back)
            continue;
        return false;
    }
    return true;
}
