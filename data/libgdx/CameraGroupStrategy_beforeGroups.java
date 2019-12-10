@Override
public void beforeGroups() {
    Gdx.gl.glEnable(GL20.GL_DEPTH_TEST);
    shader.begin();
    shader.setUniformMatrix("u_projectionViewMatrix", camera.combined);
    shader.setUniformi("u_texture", 0);
}
