public void disableVertexAttribute(int location) {
    GL20 gl = Gdx.gl20;
    checkManaged();
    gl.glDisableVertexAttribArray(location);
}
