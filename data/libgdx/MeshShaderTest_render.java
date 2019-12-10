@Override
public void render() {
    angle += Gdx.graphics.getDeltaTime() * 45;
    matrix.setToRotation(axis, angle);
    Gdx.gl20.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl20.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl20.glClear(GL20.GL_COLOR_BUFFER_BIT);
    Gdx.gl20.glEnable(GL20.GL_TEXTURE_2D);
    Gdx.gl20.glEnable(GL20.GL_BLEND);
    Gdx.gl20.glBlendFunc(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    texture.bind();
    shader.begin();
    shader.setUniformMatrix("u_worldView", matrix);
    shader.setUniformi("u_texture", 0);
    mesh.render(shader, GL20.GL_TRIANGLES);
    shader.end();
}
