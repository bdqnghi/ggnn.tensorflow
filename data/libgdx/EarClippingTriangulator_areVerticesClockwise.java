static private boolean areVerticesClockwise(float[] vertices, int offset, int count) {
    if (count <= 2)
        return false;
    float area = 0, p1x, p1y, p2x, p2y;
    for (int i = offset, n = offset + count - 3; i < n; i += 2) {
        p1x = vertices[i];
        p1y = vertices[i + 1];
        p2x = vertices[i + 2];
        p2y = vertices[i + 3];
        area += p1x * p2y - p2x * p1y;
    }
    p1x = vertices[offset + count - 2];
    p1y = vertices[offset + count - 1];
    p2x = vertices[offset];
    p2y = vertices[offset + 1];
    return area + p1x * p2y - p2x * p1y < 0;
}
