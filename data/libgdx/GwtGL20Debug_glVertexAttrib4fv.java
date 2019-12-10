@Override
public void glVertexAttrib4fv(int indx, FloatBuffer values) {
    super.glVertexAttrib4fv(indx, values);
    checkError();
}
