private void fullscreenChanged() {
    if (!isFullscreen()) {
        canvas.setWidth(config.width);
        canvas.setHeight(config.height);
    }
}
