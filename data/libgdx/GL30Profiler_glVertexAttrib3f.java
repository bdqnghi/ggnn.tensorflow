@Override
public void glVertexAttrib3f(int indx, float x, float y, float z) {
    calls++;
    gl30.glVertexAttrib3f(indx, x, y, z);
    check();
}
