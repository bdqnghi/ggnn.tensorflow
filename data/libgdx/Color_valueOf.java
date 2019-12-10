/**
 * Returns a new color from a hex string with the format RRGGBBAA.
 * @see #toString()
 */
public static Color valueOf(String hex) {
    hex = hex.charAt(0) == '#' ? hex.substring(1) : hex;
    int r = Integer.valueOf(hex.substring(0, 2), 16);
    int g = Integer.valueOf(hex.substring(2, 4), 16);
    int b = Integer.valueOf(hex.substring(4, 6), 16);
    int a = hex.length() != 8 ? 255 : Integer.valueOf(hex.substring(6, 8), 16);
    return new Color(r / 255f, g / 255f, b / 255f, a / 255f);
}
