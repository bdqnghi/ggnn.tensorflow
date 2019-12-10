/**
 * Sets the position of the text, relative to the position when the cached text was created.
 * @param x The x coordinate
 * @param y The y coordinate
 */
public void setPosition(float x, float y) {
    translate(x - this.x, y - this.y);
}
