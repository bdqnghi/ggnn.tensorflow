public void setUniform3fv(int location, float[] values, int offset, int length) {
    GL20 gl = Gdx.gl20;
    checkManaged();
    gl.glUniform3fv(location, length / 3, values, offset);
}
