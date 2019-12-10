@Override
public void render() {
    Gdx.gl.glClearColor(1, 0, 1, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    cam.update();
    batch.setProjectionMatrix(cam.combined);
    batch.begin();
    batch.draw(tex, 1, 1);
    batch.end();
}
