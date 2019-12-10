@Override
public void render() {
    GL20 gl = Gdx.gl20;
    gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClearColor(0.7f, 0, 0, 1);
    gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    gl.glEnable(GL20.GL_TEXTURE_2D);
    shader.begin();
    shader.setUniformi("u_texture", 0);
    texture.bind();
    vbo.bind(shader);
    indices.bind();
    gl.glDrawElements(GL20.GL_TRIANGLES, 3, GL20.GL_UNSIGNED_SHORT, indices.getBuffer().position());
    indices.unbind();
    vbo.unbind(shader);
    shader.end();
}
