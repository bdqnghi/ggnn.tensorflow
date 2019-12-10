@Override
public void glVertexAttrib2f(int indx, float x, float y) {
    calls++;
    gl20.glVertexAttrib2f(indx, x, y);
    check();
}
