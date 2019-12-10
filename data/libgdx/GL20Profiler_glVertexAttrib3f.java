@Override
public void glVertexAttrib3f(int indx, float x, float y, float z) {
    calls++;
    gl20.glVertexAttrib3f(indx, x, y, z);
    check();
}
