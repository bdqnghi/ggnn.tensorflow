@Override
public void render() {
    Gdx.gl.glClearColor(0, 0, 0, 1f);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    viewport.apply();
    mapRenderer.setView(cam);
    mapRenderer.render();
    if (Gdx.input.isKeyPressed(Keys.ESCAPE)) {
        if (DELETE_DELETEME_FOLDER_ON_EXIT) {
            FileHandle deleteMeHandle = Gdx.files.local(MAP_PATH);
            deleteMeHandle.deleteDirectory();
        }
        dispose();
        Gdx.app.exit();
    }
}
