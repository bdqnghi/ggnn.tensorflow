/**
 * Returns whether the given line segment intersects the given circle.
 * @param start The start point of the line segment
 * @param end The end point of the line segment
 * @param center The center of the circle
 * @param squareRadius The squared radius of the circle
 * @return Whether the line segment and the circle intersect
 */
public static boolean intersectSegmentCircle(Vector2 start, Vector2 end, Vector2 center, float squareRadius) {
    tmp.set(end.x - start.x, end.y - start.y, 0);
    tmp1.set(center.x - start.x, center.y - start.y, 0);
    float l = tmp.len();
    float u = tmp1.dot(tmp.nor());
    if (u <= 0) {
        tmp2.set(start.x, start.y, 0);
    } else if (u >= l) {
        tmp2.set(end.x, end.y, 0);
    } else {
        // remember tmp is already normalized
        tmp3.set(tmp.scl(u));
        tmp2.set(tmp3.x + start.x, tmp3.y + start.y, 0);
    }
    float x = center.x - tmp2.x;
    float y = center.y - tmp2.y;
    return x * x + y * y <= squareRadius;
}
