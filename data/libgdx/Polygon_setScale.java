/**
 * Sets the amount of scaling to be applied to the polygon.
 */
public void setScale(float scaleX, float scaleY) {
    this.scaleX = scaleX;
    this.scaleY = scaleY;
    dirty = true;
}
