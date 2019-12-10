public void glVertexAttrib2fv(int indx, FloatBuffer values) {
    GL.glVertexAttrib2fv(indx, values, getPosition(values));
}
