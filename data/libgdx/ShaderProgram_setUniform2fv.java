public void setUniform2fv(int location, float[] values, int offset, int length) {
    GL20 gl = Gdx.gl20;
    checkManaged();
    gl.glUniform2fv(location, length / 2, values, offset);
}
