@Override
public DisplayMode[] getDisplayModes() {
    try {
        org.lwjgl.opengl.DisplayMode[] availableDisplayModes = Display.getAvailableDisplayModes();
        DisplayMode[] modes = new DisplayMode[availableDisplayModes.length];
        int idx = 0;
        for (org.lwjgl.opengl.DisplayMode mode : availableDisplayModes) {
            if (mode.isFullscreenCapable()) {
                modes[idx++] = new LwjglDisplayMode(mode.getWidth(), mode.getHeight(), mode.getFrequency(), mode.getBitsPerPixel(), mode);
            }
        }
        return modes;
    } catch (LWJGLException e) {
        throw new GdxRuntimeException("Couldn't fetch available display modes", e);
    }
}
