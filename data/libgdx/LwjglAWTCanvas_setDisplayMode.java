@Override
public boolean setDisplayMode(DisplayMode displayMode) {
    if (!super.setDisplayMode(displayMode))
        return false;
    LwjglAWTCanvas.this.setDisplayMode(displayMode.width, displayMode.height);
    return true;
}
