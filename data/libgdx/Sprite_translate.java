/**
 * Sets the position relative to the current position where the sprite will be drawn. If origin, rotation, or scale are
 * changed, it is slightly more efficient to translate after those operations.
 */
public void translate(float xAmount, float yAmount) {
    x += xAmount;
    y += yAmount;
    if (dirty)
        return;
    float[] vertices = this.vertices;
    vertices[X1] += xAmount;
    vertices[Y1] += yAmount;
    vertices[X2] += xAmount;
    vertices[Y2] += yAmount;
    vertices[X3] += xAmount;
    vertices[Y3] += yAmount;
    vertices[X4] += xAmount;
    vertices[Y4] += yAmount;
}
