void mainLoop() {
    Array<LifecycleListener> lifecycleListeners = this.lifecycleListeners;
    try {
        graphics.setupDisplay();
    } catch (LWJGLException e) {
        throw new GdxRuntimeException(e);
    }
    listener.create();
    graphics.resize = true;
    int lastWidth = graphics.getWidth();
    int lastHeight = graphics.getHeight();
    graphics.lastTime = System.nanoTime();
    boolean wasActive = true;
    while (running) {
        Display.processMessages();
        if (Display.isCloseRequested())
            exit();
        boolean isActive = Display.isActive();
        if (wasActive && !isActive) {
            // if it's just recently minimized from active state
            wasActive = false;
            synchronized (lifecycleListeners) {
                for (LifecycleListener listener : lifecycleListeners) listener.pause();
            }
            listener.pause();
        }
        if (!wasActive && isActive) {
            // if it's just recently focused from minimized state
            wasActive = true;
            synchronized (lifecycleListeners) {
                for (LifecycleListener listener : lifecycleListeners) listener.resume();
            }
            listener.resume();
        }
        boolean shouldRender = false;
        if (graphics.canvas != null) {
            int width = graphics.canvas.getWidth();
            int height = graphics.canvas.getHeight();
            if (lastWidth != width || lastHeight != height) {
                lastWidth = width;
                lastHeight = height;
                Gdx.gl.glViewport(0, 0, lastWidth, lastHeight);
                listener.resize(lastWidth, lastHeight);
                shouldRender = true;
            }
        } else {
            graphics.config.x = Display.getX();
            graphics.config.y = Display.getY();
            if (graphics.resize || Display.wasResized() || (int) (Display.getWidth() * Display.getPixelScaleFactor()) != graphics.config.width || (int) (Display.getHeight() * Display.getPixelScaleFactor()) != graphics.config.height) {
                graphics.resize = false;
                graphics.config.width = (int) (Display.getWidth() * Display.getPixelScaleFactor());
                graphics.config.height = (int) (Display.getHeight() * Display.getPixelScaleFactor());
                Gdx.gl.glViewport(0, 0, graphics.config.width, graphics.config.height);
                if (listener != null)
                    listener.resize(graphics.config.width, graphics.config.height);
                graphics.requestRendering();
            }
        }
        if (executeRunnables())
            shouldRender = true;
        // If one of the runnables set running to false, for example after an exit().
        if (!running)
            break;
        input.update();
        shouldRender |= graphics.shouldRender();
        input.processEvents();
        if (audio != null)
            audio.update();
        if (!isActive && graphics.config.backgroundFPS == -1)
            shouldRender = false;
        int frameRate = isActive ? graphics.config.foregroundFPS : graphics.config.backgroundFPS;
        if (shouldRender) {
            graphics.updateTime();
            graphics.frameId++;
            listener.render();
            Display.update(false);
        } else {
            // Sleeps to avoid wasting CPU in an empty loop.
            if (frameRate == -1)
                frameRate = 10;
            if (frameRate == 0)
                frameRate = graphics.config.backgroundFPS;
            if (frameRate == 0)
                frameRate = 30;
        }
        if (frameRate > 0)
            Display.sync(frameRate);
    }
    synchronized (lifecycleListeners) {
        for (LifecycleListener listener : lifecycleListeners) {
            listener.pause();
            listener.dispose();
        }
    }
    listener.pause();
    listener.dispose();
    Display.destroy();
    if (audio != null)
        audio.dispose();
    if (graphics.config.forceExit)
        System.exit(-1);
}
