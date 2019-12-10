@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    camera.update();
    batch.setProjectionMatrix(camera.combined);
    batch.begin();
    batch.draw(img2, -100, 0);
    batch.draw(img1, 0, 0);
    batch.end();
    batch.getProjectionMatrix().setToOrtho2D(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    batch.begin();
    font.draw(batch, "fps: " + Gdx.graphics.getFramesPerSecond(), 0, 30);
    batch.end();
}
