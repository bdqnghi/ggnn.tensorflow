public void render() {
    Gdx.gl20.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl20.glClear(GL20.GL_COLOR_BUFFER_BIT);
    Gdx.gl20.glActiveTexture(GL20.GL_TEXTURE0);
    texture.bind();
    Gdx.gl20.glActiveTexture(GL20.GL_TEXTURE1);
    texture2.bind();
    shader.begin();
    shader.setUniformi("s_texture", 0);
    shader.setUniformi("s_texture2", 1);
    mesh.render(shader, GL20.GL_TRIANGLES);
    shader.end();
}
