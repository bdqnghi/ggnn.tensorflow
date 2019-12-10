/**
 * Checks whether the line segment and the circle intersect and returns by how much and in what direction the line has to move
 * away from the circle to not intersect.
 *
 * @param start The line segment starting point
 * @param end The line segment end point
 * @param point The center of the circle
 * @param radius The radius of the circle
 * @param displacement The displacement vector set by the method having unit length
 * @return The displacement or Float.POSITIVE_INFINITY if no intersection is present
 */
public static float intersectSegmentCircleDisplace(Vector2 start, Vector2 end, Vector2 point, float radius, Vector2 displacement) {
    float u = (point.x - start.x) * (end.x - start.x) + (point.y - start.y) * (end.y - start.y);
    float d = start.dst(end);
    u /= d * d;
    if (u < 0 || u > 1)
        return Float.POSITIVE_INFINITY;
    tmp.set(end.x, end.y, 0).sub(start.x, start.y, 0);
    tmp2.set(start.x, start.y, 0).add(tmp.scl(u));
    d = tmp2.dst(point.x, point.y, 0);
    if (d < radius) {
        displacement.set(point).sub(tmp2.x, tmp2.y).nor();
        return d;
    } else
        return Float.POSITIVE_INFINITY;
}
