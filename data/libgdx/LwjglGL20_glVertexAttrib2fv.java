public void glVertexAttrib2fv(int indx, FloatBuffer values) {
    GL20.glVertexAttrib2f(indx, values.get(), values.get());
}
