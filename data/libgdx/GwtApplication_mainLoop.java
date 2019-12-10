void mainLoop() {
    graphics.update();
    if (Gdx.graphics.getWidth() != lastWidth || Gdx.graphics.getHeight() != lastHeight) {
        GwtApplication.this.listener.resize(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
        lastWidth = graphics.getWidth();
        lastHeight = graphics.getHeight();
        Gdx.gl.glViewport(0, 0, lastWidth, lastHeight);
    }
    runnablesHelper.addAll(runnables);
    runnables.clear();
    for (int i = 0; i < runnablesHelper.size; i++) {
        runnablesHelper.get(i).run();
    }
    runnablesHelper.clear();
    graphics.frameId++;
    listener.render();
    input.reset();
}
