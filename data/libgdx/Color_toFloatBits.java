/**
 * Packs the color components into a 32-bit integer with the format ABGR and then converts it to a float.
 * @return the packed color as a 32-bit float
 * @see NumberUtils#intToFloatColor(int)
 */
public static float toFloatBits(float r, float g, float b, float a) {
    int color = ((int) (255 * a) << 24) | ((int) (255 * b) << 16) | ((int) (255 * g) << 8) | ((int) (255 * r));
    return NumberUtils.intToFloatColor(color);
}
