/**
 * Sets this {@code Rectangle} to the value represented by the specified string according to the format of {@link #toString()}
 * .
 * @param v the string.
 * @return this rectangle for chaining
 */
public Rectangle fromString(String v) {
    int s0 = v.indexOf(',', 1);
    int s1 = v.indexOf(',', s0 + 1);
    int s2 = v.indexOf(',', s1 + 1);
    if (s0 != -1 && s1 != -1 && s2 != -1 && v.charAt(0) == '[' && v.charAt(v.length() - 1) == ']') {
        try {
            float x = Float.parseFloat(v.substring(1, s0));
            float y = Float.parseFloat(v.substring(s0 + 1, s1));
            float width = Float.parseFloat(v.substring(s1 + 1, s2));
            float height = Float.parseFloat(v.substring(s2 + 1, v.length() - 1));
            return this.set(x, y, width, height);
        } catch (NumberFormatException ex) {
        // Throw a GdxRuntimeException
        }
    }
    throw new GdxRuntimeException("Malformed Rectangle: " + v);
}
