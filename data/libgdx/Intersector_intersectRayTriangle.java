/**
 * Intersect a {@link Ray} and a triangle, returning the intersection point in intersection.
 *
 * @param ray The ray
 * @param t1 The first vertex of the triangle
 * @param t2 The second vertex of the triangle
 * @param t3 The third vertex of the triangle
 * @param intersection The intersection point (optional)
 * @return True in case an intersection is present.
 */
public static boolean intersectRayTriangle(Ray ray, Vector3 t1, Vector3 t2, Vector3 t3, Vector3 intersection) {
    Vector3 edge1 = v0.set(t2).sub(t1);
    Vector3 edge2 = v1.set(t3).sub(t1);
    Vector3 pvec = v2.set(ray.direction).crs(edge2);
    float det = edge1.dot(pvec);
    if (MathUtils.isZero(det)) {
        p.set(t1, t2, t3);
        if (p.testPoint(ray.origin) == PlaneSide.OnPlane && Intersector.isPointInTriangle(ray.origin, t1, t2, t3)) {
            if (intersection != null)
                intersection.set(ray.origin);
            return true;
        }
        return false;
    }
    det = 1.0f / det;
    Vector3 tvec = i.set(ray.origin).sub(t1);
    float u = tvec.dot(pvec) * det;
    if (u < 0.0f || u > 1.0f)
        return false;
    Vector3 qvec = tvec.crs(edge1);
    float v = ray.direction.dot(qvec) * det;
    if (v < 0.0f || u + v > 1.0f)
        return false;
    float t = edge2.dot(qvec) * det;
    if (t < 0)
        return false;
    if (intersection != null) {
        if (t <= MathUtils.FLOAT_ROUNDING_ERROR) {
            intersection.set(ray.origin);
        } else {
            ray.getEndPoint(intersection, t);
        }
    }
    return true;
}
