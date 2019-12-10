/**
 * Sets the position relative to the current position where the sprite will be drawn. If origin, rotation, or scale are
 * changed, it is slightly more efficient to translate after those operations.
 */
public void translate(float xAmount, float yAmount) {
    x += xAmount;
    y += yAmount;
    if (dirty)
        return;
    final float[] vertices = this.vertices;
    for (int i = 0; i < vertices.length; i += Sprite.VERTEX_SIZE) {
        vertices[i] += xAmount;
        vertices[i + 1] += yAmount;
    }
}
