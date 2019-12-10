public void render() {
    Gdx.gl.glClearColor(0, 0, 0, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    modelBatch.begin(camera);
    modelBatch.render(boxInstance, environment);
    modelBatch.end();
}
