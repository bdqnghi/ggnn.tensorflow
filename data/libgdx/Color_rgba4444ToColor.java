/**
 * Sets the Color components using the specified integer value in the format RGBA4444. This is inverse to the rgba4444(r, g,
 * b, a) method.
 *
 * @param color The Color to be modified.
 * @param value An integer color value in RGBA4444 format.
 */
public static void rgba4444ToColor(Color color, int value) {
    color.r = ((value & 0x0000f000) >>> 12) / 15f;
    color.g = ((value & 0x00000f00) >>> 8) / 15f;
    color.b = ((value & 0x000000f0) >>> 4) / 15f;
    color.a = ((value & 0x0000000f)) / 15f;
}
