/**
 * Sets the Color components using the specified integer value in the format RGB565. This is inverse to the rgb565(r, g, b)
 * method.
 *
 * @param color The Color to be modified.
 * @param value An integer color value in RGB565 format.
 */
public static void rgb565ToColor(Color color, int value) {
    color.r = ((value & 0x0000F800) >>> 11) / 31f;
    color.g = ((value & 0x000007E0) >>> 5) / 63f;
    color.b = ((value & 0x0000001F) >>> 0) / 31f;
}
