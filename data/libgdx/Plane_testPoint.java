/**
 * Returns on which side the given point lies relative to the plane and its normal. PlaneSide.Front refers to the side the
 * plane normal points to.
 *
 * @param x
 * @param y
 * @param z
 * @return The side the point lies relative to the plane
 */
public PlaneSide testPoint(float x, float y, float z) {
    float dist = normal.dot(x, y, z) + d;
    if (dist == 0)
        return PlaneSide.OnPlane;
    else if (dist < 0)
        return PlaneSide.Back;
    else
        return PlaneSide.Front;
}
