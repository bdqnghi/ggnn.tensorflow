public void enableVertexAttribute(int location) {
    GL20 gl = Gdx.gl20;
    checkManaged();
    gl.glEnableVertexAttribArray(location);
}
