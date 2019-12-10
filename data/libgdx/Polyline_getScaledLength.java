/**
 * Returns the euclidean length of the polyline
 */
public float getScaledLength() {
    if (!calculateScaledLength)
        return scaledLength;
    calculateScaledLength = false;
    scaledLength = 0;
    for (int i = 0, n = localVertices.length - 2; i < n; i += 2) {
        float x = localVertices[i + 2] * scaleX - localVertices[i] * scaleX;
        float y = localVertices[i + 1] * scaleY - localVertices[i + 3] * scaleY;
        scaledLength += (float) Math.sqrt(x * x + y * y);
    }
    return scaledLength;
}
