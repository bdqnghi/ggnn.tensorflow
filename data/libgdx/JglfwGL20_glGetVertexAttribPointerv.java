public void glGetVertexAttribPointerv(int index, int pname, Buffer pointer) {
    GL.glGetVertexAttribPointerv(index, pname, pointer, getPosition(pointer));
}
