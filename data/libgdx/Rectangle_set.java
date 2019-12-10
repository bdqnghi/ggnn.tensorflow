/**
 * Sets the values of the given rectangle to this rectangle.
 * @param rect the other rectangle
 * @return this rectangle for chaining
 */
public Rectangle set(Rectangle rect) {
    this.x = rect.x;
    this.y = rect.y;
    this.width = rect.width;
    this.height = rect.height;
    return this;
}
