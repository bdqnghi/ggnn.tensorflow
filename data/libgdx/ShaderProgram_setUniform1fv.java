public void setUniform1fv(int location, float[] values, int offset, int length) {
    GL20 gl = Gdx.gl20;
    checkManaged();
    gl.glUniform1fv(location, length, values, offset);
}
