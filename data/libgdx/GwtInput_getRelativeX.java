protected int getRelativeX(Touch touch, CanvasElement target) {
    // Correct for canvas CSS scaling
    float xScaleRatio = target.getWidth() * 1f / target.getClientWidth();
    return Math.round(xScaleRatio * touch.getRelativeX(target));
}
