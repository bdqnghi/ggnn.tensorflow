@Override
public void glVertexAttrib4f(int indx, float x, float y, float z, float w) {
    super.glVertexAttrib4f(indx, x, y, z, w);
    checkError();
}
