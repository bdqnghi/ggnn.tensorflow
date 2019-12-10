protected int getFrameRate() {
    int frameRate = Display.isActive() ? graphics.config.foregroundFPS : graphics.config.backgroundFPS;
    if (frameRate == -1)
        frameRate = 10;
    if (frameRate == 0)
        frameRate = graphics.config.backgroundFPS;
    if (frameRate == 0)
        frameRate = 30;
    return frameRate;
}
