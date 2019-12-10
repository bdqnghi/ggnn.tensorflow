@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    ui.act(Gdx.graphics.getDeltaTime());
    ui.draw();
}
