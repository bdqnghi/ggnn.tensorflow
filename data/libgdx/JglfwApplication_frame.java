/**
 * Handles posted runnables, input, and rendering for each frame.
 */
protected void frame() {
    if (!running)
        return;
    boolean shouldRender = false;
    if (executeRunnables())
        shouldRender = true;
    if (!running)
        return;
    input.update();
    shouldRender |= graphics.shouldRender();
    long frameStartTime = System.nanoTime();
    int targetFPS = // 
    (graphics.isHidden() || graphics.isMinimized()) ? // 
    hiddenFPS : (graphics.isForeground() ? foregroundFPS : backgroundFPS);
    if (targetFPS == -1) {
        // Rendering is paused.
        if (!isPaused)
            listener.pause();
        isPaused = true;
    } else {
        if (isPaused)
            listener.resume();
        isPaused = false;
        if (shouldRender)
            render(frameStartTime);
        else
            targetFPS = backgroundFPS;
    }
    if (targetFPS != 0) {
        if (targetFPS == -1)
            sleep(100);
        else
            Sync.sync(targetFPS);
    }
}
