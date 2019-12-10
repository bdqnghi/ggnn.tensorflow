public int getWidth() {
    if (canvas != null)
        return Math.max(1, canvas.getWidth());
    else
        return (int) (Display.getWidth() * Display.getPixelScaleFactor());
}
