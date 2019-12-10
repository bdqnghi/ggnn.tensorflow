@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    if (texture != null) {
        batch.begin();
        batch.draw(texture, Gdx.graphics.getWidth() * 0.5f - texture.getWidth() * 0.5f, 100f);
        batch.end();
    } else if (text != null) {
        batch.begin();
        font.draw(batch, text, 10, Gdx.graphics.getHeight() - 10);
        batch.end();
    }
    stage.act(Gdx.graphics.getDeltaTime());
    stage.draw();
}
