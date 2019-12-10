@Override
public void render() {
    Gdx.gl.glClearColor(color.r, color.g, color.g, color.a);
    Gdx.gl.glClear(GL10.GL_COLOR_BUFFER_BIT);
}
