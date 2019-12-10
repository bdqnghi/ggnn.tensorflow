/**
 * Sets this {@code Vector2} to the value represented by the specified string according to the format of {@link #toString()}.
 * @param v the string.
 * @return this vector for chaining
 */
public Vector2 fromString(String v) {
    int s = v.indexOf(',', 1);
    if (s != -1 && v.charAt(0) == '(' && v.charAt(v.length() - 1) == ')') {
        try {
            float x = Float.parseFloat(v.substring(1, s));
            float y = Float.parseFloat(v.substring(s + 1, v.length() - 1));
            return this.set(x, y);
        } catch (NumberFormatException ex) {
        // Throw a GdxRuntimeException
        }
    }
    throw new GdxRuntimeException("Malformed Vector2: " + v);
}
