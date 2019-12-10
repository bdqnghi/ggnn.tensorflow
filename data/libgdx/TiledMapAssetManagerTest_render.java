@Override
public void render() {
    Gdx.gl.glClearColor(100f / 255f, 100f / 255f, 250f / 255f, 1f);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    camera.update();
    renderer.setView(camera);
    renderer.render();
    batch.begin();
    font.draw(batch, "FPS: " + Gdx.graphics.getFramesPerSecond(), 10, 20);
    batch.end();
}
