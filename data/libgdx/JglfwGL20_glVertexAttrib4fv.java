public void glVertexAttrib4fv(int indx, FloatBuffer values) {
    GL.glVertexAttrib4fv(indx, values, getPosition(values));
}
