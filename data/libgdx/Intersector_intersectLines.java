/**
 * Intersects the two lines and returns the intersection point in intersection.
 * @param intersection The intersection point, or null.
 * @return Whether the two lines intersect
 */
public static boolean intersectLines(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, Vector2 intersection) {
    float d = (y4 - y3) * (x2 - x1) - (x4 - x3) * (y2 - y1);
    if (d == 0)
        return false;
    if (intersection != null) {
        float ua = ((x4 - x3) * (y1 - y3) - (y4 - y3) * (x1 - x3)) / d;
        intersection.set(x1 + (x2 - x1) * ua, y1 + (y2 - y1) * ua);
    }
    return true;
}
