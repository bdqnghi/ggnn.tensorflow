void create() {
    try {
        setGlobals();
        graphics.initiateGL();
        canvas.setVSyncEnabled(graphics.config.vSyncEnabled);
        listener.create();
        lastWidth = Math.max(1, graphics.getWidth());
        lastHeight = Math.max(1, graphics.getHeight());
        listener.resize(lastWidth, lastHeight);
        start();
    } catch (Throwable ex) {
        stopped();
        exception(ex);
    }
}
