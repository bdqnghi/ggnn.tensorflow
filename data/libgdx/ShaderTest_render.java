@Override
public void render() {
    counter = (counter + Gdx.graphics.getDeltaTime()) % 2.f;
    testAttribute1.value = Math.abs(1f - counter);
    testAttribute2.value = 1f - testAttribute1.value;
    camController.update();
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    modelBatch.begin(cam);
    modelBatch.render(instances);
    modelBatch.end();
}
