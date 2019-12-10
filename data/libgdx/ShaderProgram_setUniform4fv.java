public void setUniform4fv(int location, float[] values, int offset, int length) {
    GL20 gl = Gdx.gl20;
    checkManaged();
    gl.glUniform4fv(location, length / 4, values, offset);
}
