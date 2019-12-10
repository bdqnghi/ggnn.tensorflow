@Override
public void glVertexAttrib3fv(int indx, FloatBuffer values) {
    gl.vertexAttrib3fv(indx, copy(values));
}
