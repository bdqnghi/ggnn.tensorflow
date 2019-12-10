@Override
public void glVertexAttrib4f(int indx, float x, float y, float z, float w) {
    calls++;
    gl30.glVertexAttrib4f(indx, x, y, z, w);
    check();
}
