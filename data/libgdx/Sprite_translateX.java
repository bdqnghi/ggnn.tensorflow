/**
 * Sets the x position relative to the current position where the sprite will be drawn. If origin, rotation, or scale are
 * changed, it is slightly more efficient to translate after those operations.
 */
public void translateX(float xAmount) {
    this.x += xAmount;
    if (dirty)
        return;
    float[] vertices = this.vertices;
    vertices[X1] += xAmount;
    vertices[X2] += xAmount;
    vertices[X3] += xAmount;
    vertices[X4] += xAmount;
}
