/**
 * Revert to the default system cursor
 */
public static void resetCursor() {
    try {
        Mouse.setNativeCursor(null);
    } catch (LWJGLException e) {
        throw new GdxRuntimeException("Could not set cursor image.", e);
    }
}
