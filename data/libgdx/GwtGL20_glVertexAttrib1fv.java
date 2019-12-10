@Override
public void glVertexAttrib1fv(int indx, FloatBuffer values) {
    gl.vertexAttrib1fv(indx, copy(values));
}
