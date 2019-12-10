/**
 * Sets the y position relative to the current position where the sprite will be drawn. If origin, rotation, or scale are
 * changed, it is slightly more efficient to translate after those operations.
 */
public void translateY(float yAmount) {
    y += yAmount;
    if (dirty)
        return;
    final float[] vertices = this.vertices;
    for (int i = 1; i < vertices.length; i += Sprite.VERTEX_SIZE) vertices[i] += yAmount;
}
