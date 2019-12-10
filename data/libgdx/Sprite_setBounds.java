/**
 * Sets the position and size of the sprite when drawn, before scaling and rotation are applied. If origin, rotation, or scale
 * are changed, it is slightly more efficient to set the bounds after those operations.
 */
public void setBounds(float x, float y, float width, float height) {
    this.x = x;
    this.y = y;
    this.width = width;
    this.height = height;
    if (dirty)
        return;
    float x2 = x + width;
    float y2 = y + height;
    float[] vertices = this.vertices;
    vertices[X1] = x;
    vertices[Y1] = y;
    vertices[X2] = x;
    vertices[Y2] = y2;
    vertices[X3] = x2;
    vertices[Y3] = y2;
    vertices[X4] = x2;
    vertices[Y4] = y;
    if (rotation != 0 || scaleX != 1 || scaleY != 1)
        dirty = true;
}
