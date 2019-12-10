@Override
public void render() {
    Gdx.gl20.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl20.glClear(GL20.GL_COLOR_BUFFER_BIT);
    shader.begin();
    mesh.render(shader, GL20.GL_TRIANGLES);
    shader.end();
}
