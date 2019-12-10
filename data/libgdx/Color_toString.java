/**
 * Returns the color encoded as hex string with the format RRGGBBAA.
 */
public String toString() {
    String value = Integer.toHexString(((int) (255 * r) << 24) | ((int) (255 * g) << 16) | ((int) (255 * b) << 8) | ((int) (255 * a)));
    while (value.length() < 8) value = "0" + value;
    return value;
}
