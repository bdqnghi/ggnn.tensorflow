/**
 * Sets the y position relative to the current position where the sprite will be drawn. If origin, rotation, or scale are
 * changed, it is slightly more efficient to translate after those operations.
 */
public void translateY(float yAmount) {
    y += yAmount;
    if (dirty)
        return;
    float[] vertices = this.vertices;
    vertices[Y1] += yAmount;
    vertices[Y2] += yAmount;
    vertices[Y3] += yAmount;
    vertices[Y4] += yAmount;
}
