@Override
public DisplayMode getDesktopDisplayMode() {
    return new IOSDisplayMode(getWidth(), getHeight(), config.preferredFramesPerSecond, bufferFormat.r + bufferFormat.g + bufferFormat.b + bufferFormat.a);
}
