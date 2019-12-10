static public DisplayMode[] getDisplayModes() {
    GraphicsDevice device = GraphicsEnvironment.getLocalGraphicsEnvironment().getDefaultScreenDevice();
    java.awt.DisplayMode desktopMode = device.getDisplayMode();
    java.awt.DisplayMode[] displayModes = device.getDisplayModes();
    Array<DisplayMode> modes = new Array();
    outer: for (java.awt.DisplayMode mode : displayModes) {
        for (DisplayMode other : modes) if (other.width == mode.getWidth() && other.height == mode.getHeight() && other.bitsPerPixel == mode.getBitDepth())
            // Duplicate.
            continue outer;
        if (mode.getBitDepth() != desktopMode.getBitDepth())
            continue;
        modes.add(new JglfwDisplayMode(mode.getWidth(), mode.getHeight(), mode.getRefreshRate(), mode.getBitDepth()));
    }
    return modes.toArray(DisplayMode.class);
}
