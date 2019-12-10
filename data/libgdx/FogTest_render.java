@Override
public void render() {
    animate();
    inputController.update();
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    Gdx.gl.glClearColor(0.13f, 0.13f, 0.13f, 1);
    modelBatch.begin(cam);
    modelBatch.render(instance, environment);
    modelBatch.end();
}
