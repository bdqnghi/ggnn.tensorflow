public void glVertexAttrib3fv(int indx, FloatBuffer values) {
    GL20.glVertexAttrib3f(indx, values.get(), values.get(), values.get());
}
