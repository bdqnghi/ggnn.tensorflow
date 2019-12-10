/**
 * Intersect two 2D Rays and return the scalar parameter of the first ray at the intersection point.
 * You can get the intersection point by: Vector2 point(direction1).scl(scalar).add(start1);
 * For more information, check: http://stackoverflow.com/a/565282/1091440
 * @param start1 Where the first ray start
 * @param direction1 The direction the first ray is pointing
 * @param start2 Where the second ray start
 * @param direction2 The direction the second ray is pointing
 * @return scalar parameter on the first ray describing the point where the intersection happens. May be negative.
 * In case the rays are collinear, Float.POSITIVE_INFINITY will be returned.
 */
public static float intersectRayRay(Vector2 start1, Vector2 direction1, Vector2 start2, Vector2 direction2) {
    float difx = start2.x - start1.x;
    float dify = start2.y - start1.y;
    float d1xd2 = direction1.x * direction2.y - direction1.y * direction2.x;
    if (d1xd2 == 0.0f) {
        // collinear
        return Float.POSITIVE_INFINITY;
    }
    float d2sx = direction2.x / d1xd2;
    float d2sy = direction2.y / d1xd2;
    return difx * d2sy - dify * d2sx;
}
