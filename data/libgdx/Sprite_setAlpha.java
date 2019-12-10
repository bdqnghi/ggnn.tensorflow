/**
 * Sets the alpha portion of the color used to tint this sprite.
 */
public void setAlpha(float a) {
    int intBits = NumberUtils.floatToIntColor(vertices[C1]);
    int alphaBits = (int) (255 * a) << 24;
    // clear alpha on original color
    intBits = intBits & 0x00FFFFFF;
    // write new alpha
    intBits = intBits | alphaBits;
    float color = NumberUtils.intToFloatColor(intBits);
    vertices[C1] = color;
    vertices[C2] = color;
    vertices[C3] = color;
    vertices[C4] = color;
}
