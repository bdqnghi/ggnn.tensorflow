/**
 * Packs the color components into a 32-bit integer with the format ABGR. Note that no range checking is performed for higher
 * performance.
 * @param r the red component, 0 - 255
 * @param g the green component, 0 - 255
 * @param b the blue component, 0 - 255
 * @param a the alpha component, 0 - 255
 * @return the packed color as a 32-bit int
 */
public static int toIntBits(int r, int g, int b, int a) {
    return (a << 24) | (b << 16) | (g << 8) | r;
}
