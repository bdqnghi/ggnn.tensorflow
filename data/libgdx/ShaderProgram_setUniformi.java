public void setUniformi(int location, int value1, int value2, int value3, int value4) {
    GL20 gl = Gdx.gl20;
    checkManaged();
    gl.glUniform4i(location, value1, value2, value3, value4);
}
