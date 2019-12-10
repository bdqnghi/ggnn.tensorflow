@Override
public void render() {
    if ((instance != null) && ((counter += Gdx.graphics.getDeltaTime()) >= 1f)) {
        counter = 0f;
        instance = null;
        assets.unload("data/g3d/cube.g3dj");
        assets.load("data/g3d/cube.g3dj", Model.class);
        assets.finishLoading();
    }
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_DEPTH_TEST);
    if (assets.update()) {
        doneLoading();
    }
    if (instance != null) {
        modelBatch.begin(camera);
        modelBatch.render(instance);
        modelBatch.end();
        spriteBatch.begin();
        spriteBatch.draw(assets.get("data/g3d/checkboard.png", Texture.class), 0, 0, 100, 100);
        spriteBatch.draw(assets.get("data/g3d/Knight.png", Texture.class), 100, 0, 100, 100);
        spriteBatch.end();
    }
}
