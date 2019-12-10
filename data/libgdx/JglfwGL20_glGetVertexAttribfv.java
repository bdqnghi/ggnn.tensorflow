public void glGetVertexAttribfv(int index, int pname, FloatBuffer params) {
    GL.glGetVertexAttribfv(index, pname, params, getPosition(params));
}
