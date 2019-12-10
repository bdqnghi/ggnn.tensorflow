@Override
public void glVertexAttrib4fv(int indx, FloatBuffer values) {
    gl.vertexAttrib4fv(indx, copy(values));
}
