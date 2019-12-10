static public void ensureCCW(float[] polygon) {
    if (!areVerticesClockwise(polygon, 0, polygon.length))
        return;
    int lastX = polygon.length - 2;
    for (int i = 0, n = polygon.length / 2; i < n; i += 2) {
        int other = lastX - i;
        float x = polygon[i];
        float y = polygon[i + 1];
        polygon[i] = polygon[other];
        polygon[i + 1] = polygon[other + 1];
        polygon[other] = x;
        polygon[other + 1] = y;
    }
}
