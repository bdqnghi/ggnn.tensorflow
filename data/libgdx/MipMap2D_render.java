public void render() {
    Gdx.gl20.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl20.glClear(GL20.GL_COLOR_BUFFER_BIT);
    Gdx.gl20.glActiveTexture(GL20.GL_TEXTURE0);
    texture.bind();
    shader.begin();
    shader.setUniformf("s_texture", 0);
    Gdx.gl20.glTexParameteri(GL20.GL_TEXTURE_2D, GL20.GL_TEXTURE_MIN_FILTER, GL20.GL_NEAREST);
    shader.setUniformf("u_offset", -0.6f);
    mesh.render(shader, GL20.GL_TRIANGLES);
    Gdx.gl20.glTexParameteri(GL20.GL_TEXTURE_2D, GL20.GL_TEXTURE_MIN_FILTER, GL20.GL_LINEAR_MIPMAP_LINEAR);
    shader.setUniformf("u_offset", 0.6f);
    mesh.render(shader, GL20.GL_TRIANGLES);
    shader.end();
}
