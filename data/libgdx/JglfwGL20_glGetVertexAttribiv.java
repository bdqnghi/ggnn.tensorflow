public void glGetVertexAttribiv(int index, int pname, IntBuffer params) {
    GL.glGetVertexAttribiv(index, pname, params, getPosition(params));
}
