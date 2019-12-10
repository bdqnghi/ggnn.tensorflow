/**
 * Check whether the given line and {@link Polygon} intersect.
 * @param p1 The first point of the line
 * @param p2 The second point of the line
 * @param polygon The polygon
 * @return Whether polygon and line intersects
 */
public static boolean intersectLinePolygon(Vector2 p1, Vector2 p2, Polygon polygon) {
    float[] vertices = polygon.getTransformedVertices();
    float x1 = p1.x, y1 = p1.y, x2 = p2.x, y2 = p2.y;
    int n = vertices.length;
    float x3 = vertices[n - 2], y3 = vertices[n - 1];
    for (int i = 0; i < n; i += 2) {
        float x4 = vertices[i], y4 = vertices[i + 1];
        float d = (y4 - y3) * (x2 - x1) - (x4 - x3) * (y2 - y1);
        if (d != 0) {
            float yd = y1 - y3;
            float xd = x1 - x3;
            float ua = ((x4 - x3) * yd - (y4 - y3) * xd) / d;
            if (ua >= 0 && ua <= 1) {
                return true;
            }
        }
        x3 = x4;
        y3 = y4;
    }
    return false;
}
