@Override
public void afterGroups() {
    shader.end();
    Gdx.gl.glDisable(GL20.GL_DEPTH_TEST);
}
