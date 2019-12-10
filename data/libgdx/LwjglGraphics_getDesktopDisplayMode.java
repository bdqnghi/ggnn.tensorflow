@Override
public DisplayMode getDesktopDisplayMode() {
    org.lwjgl.opengl.DisplayMode mode = Display.getDesktopDisplayMode();
    return new LwjglDisplayMode(mode.getWidth(), mode.getHeight(), mode.getFrequency(), mode.getBitsPerPixel(), mode);
}
