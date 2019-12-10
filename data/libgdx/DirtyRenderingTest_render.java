@Override
public void render() {
    Gdx.gl.glClearColor(MathUtils.random(), MathUtils.random(), MathUtils.random(), MathUtils.random());
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
}
