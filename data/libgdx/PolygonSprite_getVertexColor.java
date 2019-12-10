/**
 * Returns the actual color used in the vertices of this sprite. Changing the returned color will have no affect,
 * {@link #setColor(Color)} or {@link #setColor(float, float, float, float)} must be used.
 */
public Color getVertexColor() {
    int intBits = NumberUtils.floatToIntColor(vertices[2]);
    Color color = this.color;
    color.r = (intBits & 0xff) / 255f;
    color.g = ((intBits >>> 8) & 0xff) / 255f;
    color.b = ((intBits >>> 16) & 0xff) / 255f;
    color.a = ((intBits >>> 24) & 0xff) / 255f;
    return color;
}
