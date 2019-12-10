@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    ui.act(Math.min(Gdx.graphics.getDeltaTime(), 1 / 30f));
    ui.draw();
}
