public static DisplayMode[] getDisplayModes() {
    GraphicsEnvironment genv = GraphicsEnvironment.getLocalGraphicsEnvironment();
    GraphicsDevice device = genv.getDefaultScreenDevice();
    java.awt.DisplayMode desktopMode = device.getDisplayMode();
    java.awt.DisplayMode[] displayModes = device.getDisplayModes();
    ArrayList<DisplayMode> modes = new ArrayList<DisplayMode>();
    int idx = 0;
    for (java.awt.DisplayMode mode : displayModes) {
        boolean duplicate = false;
        for (int i = 0; i < modes.size(); i++) {
            if (modes.get(i).width == mode.getWidth() && modes.get(i).height == mode.getHeight() && modes.get(i).bitsPerPixel == mode.getBitDepth()) {
                duplicate = true;
                break;
            }
        }
        if (duplicate)
            continue;
        if (mode.getBitDepth() != desktopMode.getBitDepth())
            continue;
        modes.add(new LwjglApplicationConfigurationDisplayMode(mode.getWidth(), mode.getHeight(), mode.getRefreshRate(), mode.getBitDepth()));
    }
    return modes.toArray(new DisplayMode[modes.size()]);
}
