/**
 * Returns the color of this sprite. Changing the returned color will have no affect, {@link #setColor(Color)} or
 * {@link #setColor(float, float, float, float)} must be used.
 */
public Color getColor() {
    int intBits = NumberUtils.floatToIntColor(vertices[C1]);
    Color color = this.color;
    color.r = (intBits & 0xff) / 255f;
    color.g = ((intBits >>> 8) & 0xff) / 255f;
    color.b = ((intBits >>> 16) & 0xff) / 255f;
    color.a = ((intBits >>> 24) & 0xff) / 255f;
    return color;
}
