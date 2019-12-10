@Override
public void glGetVertexAttribPointerv(int index, int pname, Buffer pointer) {
    calls++;
    gl20.glGetVertexAttribPointerv(index, pname, pointer);
    check();
}
