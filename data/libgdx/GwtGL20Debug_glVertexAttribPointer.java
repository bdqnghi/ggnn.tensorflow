@Override
public void glVertexAttribPointer(int indx, int size, int type, boolean normalized, int stride, int ptr) {
    super.glVertexAttribPointer(indx, size, type, normalized, stride, ptr);
    checkError();
}
