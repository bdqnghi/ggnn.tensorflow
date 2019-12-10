/**
 * Returns the euclidean length of the polyline without scaling
 */
public float getLength() {
    if (!calculateLength)
        return length;
    calculateLength = false;
    length = 0;
    for (int i = 0, n = localVertices.length - 2; i < n; i += 2) {
        float x = localVertices[i + 2] - localVertices[i];
        float y = localVertices[i + 1] - localVertices[i + 3];
        length += (float) Math.sqrt(x * x + y * y);
    }
    return length;
}
