@Override
public void render() {
    // System.out.println( "render");
    Gdx.gl.glViewport(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_TEXTURE_2D);
    shader.begin();
    shader.setUniformi("u_texture", 0);
    texture.bind();
    vbo.bind(shader);
    ibo.bind();
    Gdx.gl20.glDrawElements(GL20.GL_TRIANGLES, 3, GL20.GL_UNSIGNED_SHORT, 0);
    ibo.unbind();
    vbo.unbind(shader);
    shader.end();
}
