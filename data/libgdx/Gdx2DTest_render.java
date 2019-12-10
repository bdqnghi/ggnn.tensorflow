@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    batch.begin();
    for (int i = 0; i < sprites.size(); i++) {
        sprites.get(i).draw(batch);
    }
    batch.end();
}
