@Override
public void render() {
    inputController.update();
    if ((time += Gdx.graphics.getDeltaTime()) >= 1f) {
        time -= 1f;
        index = (index + 1) % regions.size;
        attribute.set(regions.get(index));
        Gdx.app.log("TextureRegion3DTest", "Current region = " + regions.get(index).name);
    }
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    modelBatch.begin(cam);
    modelBatch.render(instance, environment);
    modelBatch.end();
}
