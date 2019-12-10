@Override
public void glGetVertexAttribfv(int index, int pname, FloatBuffer params) {
    super.glGetVertexAttribfv(index, pname, params);
    checkError();
}
