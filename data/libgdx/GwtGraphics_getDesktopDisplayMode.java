@Override
public DisplayMode getDesktopDisplayMode() {
    return new DisplayMode(getScreenWidthJSNI(), getScreenHeightJSNI(), 60, 8) {
    };
}
