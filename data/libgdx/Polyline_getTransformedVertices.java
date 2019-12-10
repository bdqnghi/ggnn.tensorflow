/**
 * Returns vertices scaled, rotated, and offset by the polygon position.
 */
public float[] getTransformedVertices() {
    if (!dirty)
        return worldVertices;
    dirty = false;
    final float[] localVertices = this.localVertices;
    if (worldVertices == null || worldVertices.length < localVertices.length)
        worldVertices = new float[localVertices.length];
    final float[] worldVertices = this.worldVertices;
    final float positionX = x;
    final float positionY = y;
    final float originX = this.originX;
    final float originY = this.originY;
    final float scaleX = this.scaleX;
    final float scaleY = this.scaleY;
    final boolean scale = scaleX != 1 || scaleY != 1;
    final float rotation = this.rotation;
    final float cos = MathUtils.cosDeg(rotation);
    final float sin = MathUtils.sinDeg(rotation);
    for (int i = 0, n = localVertices.length; i < n; i += 2) {
        float x = localVertices[i] - originX;
        float y = localVertices[i + 1] - originY;
        // scale if needed
        if (scale) {
            x *= scaleX;
            y *= scaleY;
        }
        // rotate if needed
        if (rotation != 0) {
            float oldX = x;
            x = cos * x - sin * y;
            y = sin * oldX + cos * y;
        }
        worldVertices[i] = positionX + x + originX;
        worldVertices[i + 1] = positionY + y + originY;
    }
    return worldVertices;
}
