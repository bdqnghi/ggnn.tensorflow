void render(boolean shouldRender) throws LWJGLException {
    if (!running)
        return;
    setGlobals();
    canvas.setCursor(cursor);
    int width = Math.max(1, graphics.getWidth());
    int height = Math.max(1, graphics.getHeight());
    if (lastWidth != width || lastHeight != height) {
        lastWidth = width;
        lastHeight = height;
        Gdx.gl.glViewport(0, 0, lastWidth, lastHeight);
        resize(width, height);
        listener.resize(width, height);
        shouldRender = true;
    }
    if (executeRunnables())
        shouldRender = true;
    // If one of the runnables set running to false, for example after an exit().
    if (!running)
        return;
    shouldRender |= graphics.shouldRender();
    input.processEvents();
    if (audio != null)
        audio.update();
    if (shouldRender) {
        graphics.updateTime();
        graphics.frameId++;
        listener.render();
        canvas.swapBuffers();
    }
    Display.sync(getFrameRate() * instanceCount);
}
