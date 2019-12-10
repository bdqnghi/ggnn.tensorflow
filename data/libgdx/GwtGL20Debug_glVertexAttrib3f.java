@Override
public void glVertexAttrib3f(int indx, float x, float y, float z) {
    super.glVertexAttrib3f(indx, x, y, z);
    checkError();
}
