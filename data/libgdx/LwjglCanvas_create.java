void create() {
    try {
        graphics.setupDisplay();
        listener.create();
        listener.resize(Math.max(1, graphics.getWidth()), Math.max(1, graphics.getHeight()));
        start();
    } catch (Exception ex) {
        stopped();
        exception(ex);
        return;
    }
    EventQueue.invokeLater(new Runnable() {

        int lastWidth = Math.max(1, graphics.getWidth());

        int lastHeight = Math.max(1, graphics.getHeight());

        public void run() {
            if (!running || Display.isCloseRequested()) {
                running = false;
                stopped();
                return;
            }
            try {
                Display.processMessages();
                if (cursor != null || !isWindows)
                    canvas.setCursor(cursor);
                boolean shouldRender = false;
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
                input.update();
                shouldRender |= graphics.shouldRender();
                input.processEvents();
                if (audio != null)
                    audio.update();
                if (shouldRender) {
                    graphics.updateTime();
                    graphics.frameId++;
                    listener.render();
                    Display.update(false);
                }
                Display.sync(getFrameRate());
            } catch (Throwable ex) {
                exception(ex);
            }
            EventQueue.invokeLater(this);
        }
    });
}
