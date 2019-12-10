@Override
public void render() {
    counter = (counter + Gdx.graphics.getDeltaTime()) % 1.f;
    blendingAttribute.opacity = 0.25f + Math.abs(0.5f - counter);
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    modelInstance.transform.rotate(Vector3.Y, 30 * Gdx.graphics.getDeltaTime());
    modelBatch.begin(camera);
    modelBatch.render(background);
    modelBatch.render(modelInstance);
    modelBatch.end();
}
