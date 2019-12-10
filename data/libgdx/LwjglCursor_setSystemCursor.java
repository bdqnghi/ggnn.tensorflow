@Override
public void setSystemCursor() {
    try {
        Mouse.setNativeCursor(lwjglCursor);
    } catch (LWJGLException e) {
        throw new GdxRuntimeException("Could not set cursor image.", e);
    }
}
