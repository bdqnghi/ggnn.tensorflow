@Override
public void glGetVertexAttribfv(int index, int pname, FloatBuffer params) {
    calls++;
    gl20.glGetVertexAttribfv(index, pname, params);
    check();
}
