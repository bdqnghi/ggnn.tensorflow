/**
 * Sets the Color components using the specified integer value in the format RGB888. This is inverse to the rgb888(r, g, b)
 * method.
 *
 * @param color The Color to be modified.
 * @param value An integer color value in RGB888 format.
 */
public static void rgb888ToColor(Color color, int value) {
    color.r = ((value & 0x00ff0000) >>> 16) / 255f;
    color.g = ((value & 0x0000ff00) >>> 8) / 255f;
    color.b = ((value & 0x000000ff)) / 255f;
}
