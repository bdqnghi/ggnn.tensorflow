@Override
public void glVertexAttrib1fv(int indx, FloatBuffer values) {
    super.glVertexAttrib1fv(indx, values);
    checkError();
}
