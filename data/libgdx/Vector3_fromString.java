/**
 * Sets this {@code Vector3} to the value represented by the specified string according to the format of {@link #toString()}.
 * @param v the string.
 * @return this vector for chaining
 */
public Vector3 fromString(String v) {
    int s0 = v.indexOf(',', 1);
    int s1 = v.indexOf(',', s0 + 1);
    if (s0 != -1 && s1 != -1 && v.charAt(0) == '(' && v.charAt(v.length() - 1) == ')') {
        try {
            float x = Float.parseFloat(v.substring(1, s0));
            float y = Float.parseFloat(v.substring(s0 + 1, s1));
            float z = Float.parseFloat(v.substring(s1 + 1, v.length() - 1));
            return this.set(x, y, z);
        } catch (NumberFormatException ex) {
        // Throw a GdxRuntimeException
        }
    }
    throw new GdxRuntimeException("Malformed Vector3: " + v);
}
