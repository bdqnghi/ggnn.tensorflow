@Override
public boolean setDisplayMode(int width, int height, boolean fullscreen) {
    if (fullscreen) {
        if (width != getScreenWidthJSNI() && height != getScreenHeightJSNI())
            return false;
        return setFullscreenJSNI(this, canvas);
    } else {
        if (isFullscreenJSNI())
            exitFullscreen();
        canvas.setWidth(width);
        canvas.setHeight(height);
        return true;
    }
}
