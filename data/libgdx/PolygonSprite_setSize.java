/**
 * Sets the size of the sprite when drawn, before scaling and rotation are applied. If origin, rotation, or scale are changed,
 * it is slightly more efficient to set the size after those operations. If both position and size are to be changed, it is
 * better to use {@link #setBounds(float, float, float, float)}.
 */
public void setSize(float width, float height) {
    this.width = width;
    this.height = height;
    dirty = true;
}
