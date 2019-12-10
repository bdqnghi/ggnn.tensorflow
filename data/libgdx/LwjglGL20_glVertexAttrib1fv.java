public void glVertexAttrib1fv(int indx, FloatBuffer values) {
    GL20.glVertexAttrib1f(indx, values.get());
}
