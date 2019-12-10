/**
 * Sets the Color components using the specified integer value in the format ARGB8888. This is the inverse to the argb8888(a,
 * r, g, b) method
 *
 * @param color The Color to be modified.
 * @param value An integer color value in ARGB8888 format.
 */
public static void argb8888ToColor(Color color, int value) {
    color.a = ((value & 0xff000000) >>> 24) / 255f;
    color.r = ((value & 0x00ff0000) >>> 16) / 255f;
    color.g = ((value & 0x0000ff00) >>> 8) / 255f;
    color.b = ((value & 0x000000ff)) / 255f;
}
