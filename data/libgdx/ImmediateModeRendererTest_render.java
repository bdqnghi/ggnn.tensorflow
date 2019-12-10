@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_TEXTURE_2D);
    texture.bind();
    renderer.begin(projMatrix, GL20.GL_TRIANGLES);
    renderer.texCoord(0, 0);
    renderer.color(1, 0, 0, 1);
    renderer.vertex(-0.5f, -0.5f, 0);
    renderer.texCoord(1, 0);
    renderer.color(0, 1, 0, 1);
    renderer.vertex(0.5f, -0.5f, 0);
    renderer.texCoord(0.5f, 1);
    renderer.color(0, 0, 1, 1);
    renderer.vertex(0f, 0.5f, 0);
    renderer.end();
}
