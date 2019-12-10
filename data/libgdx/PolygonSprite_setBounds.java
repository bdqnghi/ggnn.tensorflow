/**
 * Sets the position and size of the sprite when drawn, before scaling and rotation are applied. If origin, rotation, or scale
 * are changed, it is slightly more efficient to set the bounds after those operations.
 */
public void setBounds(float x, float y, float width, float height) {
    this.x = x;
    this.y = y;
    this.width = width;
    this.height = height;
    dirty = true;
}
