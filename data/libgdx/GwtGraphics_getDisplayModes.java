@Override
public DisplayMode[] getDisplayModes() {
    return new DisplayMode[] { new DisplayMode(getScreenWidthJSNI(), getScreenHeightJSNI(), 60, 8) {
    } };
}
