/**
 * Sets the x position relative to the current position where the sprite will be drawn. If origin, rotation, or scale are
 * changed, it is slightly more efficient to translate after those operations.
 */
public void translateX(float xAmount) {
    this.x += xAmount;
    if (dirty)
        return;
    final float[] vertices = this.vertices;
    for (int i = 0; i < vertices.length; i += Sprite.VERTEX_SIZE) vertices[i] += xAmount;
}
