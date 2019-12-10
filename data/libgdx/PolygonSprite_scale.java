/**
 * Sets the sprite's scale relative to the current scale.
 */
public void scale(float amount) {
    this.scaleX += amount;
    this.scaleY += amount;
    dirty = true;
}
