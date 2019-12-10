@Override
public void render() {
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClearColor(clearColor.g, clearColor.g, clearColor.b, clearColor.a);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_DEPTH_TEST);
    Gdx.gl.glEnable(GL20.GL_TEXTURE_2D);
    cam.update();
    modelInstance.transform.rotate(Vector3.Y, 45 * Gdx.graphics.getDeltaTime());
    modelBatch.begin(cam);
    modelBatch.render(modelInstance);
    modelBatch.end();
    if (Gdx.input.justTouched() || fbTexture == null) {
        if (fbTexture != null)
            fbTexture.getTexture().dispose();
        fbTexture = ScreenUtils.getFrameBufferTexture();
    }
    batch.begin();
    if (fbTexture != null) {
        batch.draw(fbTexture, 0, 0, 100, 100);
    }
    font.draw(batch, "Touch screen to take a snapshot", 10, 40);
    batch.end();
}
