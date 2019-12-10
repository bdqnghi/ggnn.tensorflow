public void glVertexAttrib3fv(int indx, FloatBuffer values) {
    GL.glVertexAttrib3fv(indx, values, getPosition(values));
}
