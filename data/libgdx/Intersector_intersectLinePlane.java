/**
 * Intersects a line and a plane. The intersection is returned as the distance from the first point to the plane. In case an
 * intersection happened, the return value is in the range [0,1]. The intersection point can be recovered by point1 + t *
 * (point2 - point1) where t is the return value of this method.
 * @param x
 * @param y
 * @param z
 * @param x2
 * @param y2
 * @param z2
 * @param plane
 */
public static float intersectLinePlane(float x, float y, float z, float x2, float y2, float z2, Plane plane, Vector3 intersection) {
    Vector3 direction = tmp.set(x2, y2, z2).sub(x, y, z);
    Vector3 origin = tmp2.set(x, y, z);
    float denom = direction.dot(plane.getNormal());
    if (denom != 0) {
        float t = -(origin.dot(plane.getNormal()) + plane.getD()) / denom;
        if (intersection != null)
            intersection.set(origin).add(direction.scl(t));
        return t;
    } else if (plane.testPoint(origin) == Plane.PlaneSide.OnPlane) {
        if (intersection != null)
            intersection.set(origin);
        return 0;
    }
    return -1;
}
