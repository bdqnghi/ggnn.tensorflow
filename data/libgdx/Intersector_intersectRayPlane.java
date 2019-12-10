/**
 * Intersects a {@link Ray} and a {@link Plane}. The intersection point is stored in intersection in case an intersection is
 * present.
 *
 * @param ray The ray
 * @param plane The plane
 * @param intersection The vector the intersection point is written to (optional)
 * @return Whether an intersection is present.
 */
public static boolean intersectRayPlane(Ray ray, Plane plane, Vector3 intersection) {
    float denom = ray.direction.dot(plane.getNormal());
    if (denom != 0) {
        float t = -(ray.origin.dot(plane.getNormal()) + plane.getD()) / denom;
        if (t < 0)
            return false;
        if (intersection != null)
            intersection.set(ray.origin).add(v0.set(ray.direction).scl(t));
        return true;
    } else if (plane.testPoint(ray.origin) == Plane.PlaneSide.OnPlane) {
        if (intersection != null)
            intersection.set(ray.origin);
        return true;
    } else
        return false;
}
