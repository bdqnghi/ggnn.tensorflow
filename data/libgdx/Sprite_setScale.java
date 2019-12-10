/**
 * Sets the sprite's scale for both X and Y. The sprite scales out from the origin. This will not affect the values returned by
 * {@link #getWidth()} and {@link #getHeight()}
 */
public void setScale(float scaleX, float scaleY) {
    this.scaleX = scaleX;
    this.scaleY = scaleY;
    dirty = true;
}
