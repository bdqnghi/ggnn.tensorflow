@Override
public void glVertexAttrib1fv(int indx, FloatBuffer values) {
    calls++;
    gl30.glVertexAttrib1fv(indx, values);
    check();
}
