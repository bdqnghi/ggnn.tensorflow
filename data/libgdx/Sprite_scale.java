/**
 * Sets the sprite's scale relative to the current scale. for example: original scale 2 -> sprite.scale(4) -> final scale 6.
 * The sprite scales out from the origin. This will not affect the values returned by {@link #getWidth()} and
 * {@link #getHeight()}
 */
public void scale(float amount) {
    this.scaleX += amount;
    this.scaleY += amount;
    dirty = true;
}
