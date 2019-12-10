public static DisplayMode getDesktopDisplayMode() {
    GraphicsEnvironment genv = GraphicsEnvironment.getLocalGraphicsEnvironment();
    GraphicsDevice device = genv.getDefaultScreenDevice();
    java.awt.DisplayMode mode = device.getDisplayMode();
    return new LwjglApplicationConfigurationDisplayMode(mode.getWidth(), mode.getHeight(), mode.getRefreshRate(), mode.getBitDepth());
}
