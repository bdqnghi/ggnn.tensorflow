public int getHeight() {
    if (canvas != null)
        return Math.max(1, canvas.getHeight());
    else
        return (int) (Display.getHeight() * Display.getPixelScaleFactor());
}
