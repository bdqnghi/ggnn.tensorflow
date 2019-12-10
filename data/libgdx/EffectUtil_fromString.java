/**
 * Converts a string to a color.
 */
static public Color fromString(String rgb) {
    if (rgb == null || rgb.length() != 6)
        return Color.white;
    return new Color(Integer.parseInt(rgb.substring(0, 2), 16), Integer.parseInt(rgb.substring(2, 4), 16), Integer.parseInt(rgb.substring(4, 6), 16));
}
