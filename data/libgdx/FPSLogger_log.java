/**
 * Logs the current frames per second to the console.
 */
public void log() {
    if (TimeUtils.nanoTime() - startTime > 1000000000) /* 1,000,000,000ns == one second */
    {
        Gdx.app.log("FPSLogger", "fps: " + Gdx.graphics.getFramesPerSecond());
        startTime = TimeUtils.nanoTime();
    }
}
