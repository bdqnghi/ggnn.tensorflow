public void render(boolean update) {
    fpsCounter.put(Gdx.graphics.getFramesPerSecond());
    if (update)
        update();
    beginRender(true);
    renderWorld();
    Gdx.gl.glDisable(GL20.GL_DEPTH_TEST);
    if (debugMode != DebugDrawModes.DBG_NoDebug)
        world.setDebugMode(debugMode);
    Gdx.gl.glEnable(GL20.GL_DEPTH_TEST);
    performance.setLength(0);
    performance.append("FPS: ").append(fpsCounter.value).append(", Bullet: ").append((int) (performanceCounter.load.value * 100f)).append("%");
}
