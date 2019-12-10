@Override
public void glVertexAttrib4f(int indx, float x, float y, float z, float w) {
    calls++;
    gl20.glVertexAttrib4f(indx, x, y, z, w);
    check();
}
