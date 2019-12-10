@Override
public void render() {
    Gdx.gl.glClearColor(0.25f, 0.25f, 0.25f, 1f);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    camera.update();
    renderer.setView(camera);
    renderer.render();
}
