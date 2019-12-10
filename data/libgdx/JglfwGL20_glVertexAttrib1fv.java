public void glVertexAttrib1fv(int indx, FloatBuffer values) {
    GL.glVertexAttrib1fv(indx, values, getPosition(values));
}
