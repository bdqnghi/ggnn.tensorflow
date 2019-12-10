/**
 * Intersects the given ray with list of triangles. Returns the nearest intersection point in intersection
 *
 * @param ray The ray
 * @param triangles The triangles
 * @param intersection The nearest intersection point (optional)
 * @return Whether the ray and the triangles intersect.
 */
public static boolean intersectRayTriangles(Ray ray, List<Vector3> triangles, Vector3 intersection) {
    float min_dist = Float.MAX_VALUE;
    boolean hit = false;
    if (triangles.size() % 3 != 0)
        throw new RuntimeException("triangle list size is not a multiple of 3");
    for (int i = 0; i < triangles.size() - 2; i += 3) {
        boolean result = intersectRayTriangle(ray, triangles.get(i), triangles.get(i + 1), triangles.get(i + 2), tmp);
        if (result == true) {
            float dist = ray.origin.dst2(tmp);
            if (dist < min_dist) {
                min_dist = dist;
                best.set(tmp);
                hit = true;
            }
        }
    }
    if (!hit)
        return false;
    else {
        if (intersection != null)
            intersection.set(best);
        return true;
    }
}
