@Override
public void glVertexAttribPointer(int indx, int size, int type, boolean normalized, int stride, int ptr) {
    calls++;
    gl20.glVertexAttribPointer(indx, size, type, normalized, stride, ptr);
    check();
}
