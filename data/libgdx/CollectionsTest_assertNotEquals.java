/**
 * Checks that the two values are not equal, and emits a warning if their hashcodes are equal.
 */
private void assertNotEquals(Object a, Object b) {
    if (a.equals(b))
        throw new GdxRuntimeException("!equals() failed: " + a + " == " + b);
    if (b.equals(a))
        throw new GdxRuntimeException("!equals() failed (not symmetric): " + b + " == " + a);
    if (a.hashCode() == b.hashCode())
        System.out.println("Warning: hashCode() may be incorrect: " + a + " == " + b);
}
