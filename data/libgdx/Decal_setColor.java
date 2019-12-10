/**
 * @see #setColor(Color)
 */
public void setColor(float color) {
    this.color.set(NumberUtils.floatToIntColor(color));
    vertices[C1] = color;
    vertices[C2] = color;
    vertices[C3] = color;
    vertices[C4] = color;
}
