@Override
public void render() {
    camController.update();
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClearColor(0, 0, 0, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    shadowLight.begin(Vector3.Zero, cam.direction);
    shadowBatch.begin(shadowLight.getCamera());
    shadowBatch.render(instance);
    shadowBatch.end();
    shadowLight.end();
    modelBatch.begin(cam);
    modelBatch.render(instance, environment);
    modelBatch.end();
}
