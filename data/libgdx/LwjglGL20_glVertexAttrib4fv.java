public void glVertexAttrib4fv(int indx, FloatBuffer values) {
    GL20.glVertexAttrib4f(indx, values.get(), values.get(), values.get(), values.get());
}
