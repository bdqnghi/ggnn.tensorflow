static private boolean areVerticesClockwise(float[] polygon, int offset, int count) {
    if (count <= 2)
        return false;
    float area = 0, p1x, p1y, p2x, p2y;
    for (int i = offset, n = offset + count - 3; i < n; i += 2) {
        p1x = polygon[i];
        p1y = polygon[i + 1];
        p2x = polygon[i + 2];
        p2y = polygon[i + 3];
        area += p1x * p2y - p2x * p1y;
    }
    p1x = polygon[count - 2];
    p1y = polygon[count - 1];
    p2x = polygon[0];
    p2y = polygon[1];
    return area + p1x * p2y - p2x * p1y < 0;
}
