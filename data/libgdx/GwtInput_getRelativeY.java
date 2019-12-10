protected int getRelativeY(Touch touch, CanvasElement target) {
    // Correct for canvas CSS scaling
    float yScaleRatio = target.getHeight() * 1f / target.getClientHeight();
    return Math.round(yScaleRatio * touch.getRelativeY(target));
}
