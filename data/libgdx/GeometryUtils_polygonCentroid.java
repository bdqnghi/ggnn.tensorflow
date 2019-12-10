/**
 * Returns the centroid for the specified non-self-intersecting polygon.
 */
static public Vector2 polygonCentroid(float[] polygon, int offset, int count, Vector2 centroid) {
    if (count < 6)
        throw new IllegalArgumentException("A polygon must have 3 or more coordinate pairs.");
    float x = 0, y = 0;
    float signedArea = 0;
    int i = offset;
    for (int n = offset + count - 2; i < n; i += 2) {
        float x0 = polygon[i];
        float y0 = polygon[i + 1];
        float x1 = polygon[i + 2];
        float y1 = polygon[i + 3];
        float a = x0 * y1 - x1 * y0;
        signedArea += a;
        x += (x0 + x1) * a;
        y += (y0 + y1) * a;
    }
    float x0 = polygon[i];
    float y0 = polygon[i + 1];
    float x1 = polygon[offset];
    float y1 = polygon[offset + 1];
    float a = x0 * y1 - x1 * y0;
    signedArea += a;
    x += (x0 + x1) * a;
    y += (y0 + y1) * a;
    if (signedArea == 0) {
        centroid.x = 0;
        centroid.y = 0;
    } else {
        signedArea *= 0.5f;
        centroid.x = x / (6 * signedArea);
        centroid.y = y / (6 * signedArea);
    }
    return centroid;
}
