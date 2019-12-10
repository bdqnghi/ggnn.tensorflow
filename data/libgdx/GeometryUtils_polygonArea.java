/**
 * Computes the area for a convex polygon.
 */
static public float polygonArea(float[] polygon, int offset, int count) {
    float area = 0;
    for (int i = offset, n = offset + count; i < n; i += 2) {
        int x1 = i;
        int y1 = i + 1;
        int x2 = (i + 2) % n;
        if (x2 < offset)
            x2 += offset;
        int y2 = (i + 3) % n;
        if (y2 < offset)
            y2 += offset;
        area += polygon[x1] * polygon[y2];
        area -= polygon[x2] * polygon[y1];
    }
    area *= 0.5f;
    return area;
}
