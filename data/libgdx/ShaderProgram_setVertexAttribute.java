public void setVertexAttribute(int location, int size, int type, boolean normalize, int stride, int offset) {
    GL20 gl = Gdx.gl20;
    checkManaged();
    gl.glVertexAttribPointer(location, size, type, normalize, stride, offset);
}
