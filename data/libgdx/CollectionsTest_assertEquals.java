/**
 * Checks that the two values are equal, and that their hashcodes are equal.
 */
private void assertEquals(Object a, Object b) {
    if (!a.equals(b))
        throw new GdxRuntimeException("equals() failed: " + a + " != " + b);
    if (!b.equals(a))
        throw new GdxRuntimeException("equals() failed (not symmetric): " + b + " != " + a);
    if (a.hashCode() != b.hashCode())
        throw new GdxRuntimeException("hashCode() failed: " + a + " != " + b);
}
