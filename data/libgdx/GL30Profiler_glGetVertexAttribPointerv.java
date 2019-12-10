@Override
public void glGetVertexAttribPointerv(int index, int pname, Buffer pointer) {
    calls++;
    gl30.glGetVertexAttribPointerv(index, pname, pointer);
    check();
}
