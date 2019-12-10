/**
 * Intersects a {@link Ray} and a sphere, returning the intersection point in intersection.
 *
 * @param ray The ray, the direction component must be normalized before calling this method
 * @param center The center of the sphere
 * @param radius The radius of the sphere
 * @param intersection The intersection point (optional, can be null)
 * @return Whether an intersection is present.
 */
public static boolean intersectRaySphere(Ray ray, Vector3 center, float radius, Vector3 intersection) {
    final float len = ray.direction.dot(center.x - ray.origin.x, center.y - ray.origin.y, center.z - ray.origin.z);
    if (// behind the ray
    len < 0.f)
        return false;
    final float dst2 = center.dst2(ray.origin.x + ray.direction.x * len, ray.origin.y + ray.direction.y * len, ray.origin.z + ray.direction.z * len);
    final float r2 = radius * radius;
    if (dst2 > r2)
        return false;
    if (intersection != null)
        intersection.set(ray.direction).scl(len - (float) Math.sqrt(r2 - dst2)).add(ray.origin);
    return true;
}
