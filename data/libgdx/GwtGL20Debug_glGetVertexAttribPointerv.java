@Override
public void glGetVertexAttribPointerv(int index, int pname, Buffer pointer) {
    super.glGetVertexAttribPointerv(index, pname, pointer);
    checkError();
}
