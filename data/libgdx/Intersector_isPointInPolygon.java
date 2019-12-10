/**
 * Returns true if the specified point is in the polygon.
 * @param offset Starting polygon index.
 * @param count Number of array indices to use after offset.
 */
public static boolean isPointInPolygon(float[] polygon, int offset, int count, float x, float y) {
    boolean oddNodes = false;
    int j = offset + count - 2;
    for (int i = offset, n = j; i <= n; i += 2) {
        float yi = polygon[i + 1];
        float yj = polygon[j + 1];
        if ((yi < y && yj >= y) || (yj < y && yi >= y)) {
            float xi = polygon[i];
            if (xi + (y - yi) / (yj - yi) * (polygon[j] - xi) < x)
                oddNodes = !oddNodes;
        }
        j = i;
    }
    return oddNodes;
}
