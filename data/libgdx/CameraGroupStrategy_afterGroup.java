@Override
public void afterGroup(int group) {
    if (group == GROUP_BLEND) {
        Gdx.gl.glDisable(GL20.GL_BLEND);
    }
}
