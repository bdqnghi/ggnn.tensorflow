@Override
public void render() {
    if (loading && assets.update())
        doneLoading();
    camController.update();
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    modelBatch.begin(cam);
    for (ModelInstance instance : instances) modelBatch.render(instance, lights);
    if (space != null)
        modelBatch.render(space);
    modelBatch.end();
}
