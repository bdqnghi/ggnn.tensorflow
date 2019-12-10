@Override
public void glGetVertexAttribfv(int index, int pname, FloatBuffer params) {
    calls++;
    gl30.glGetVertexAttribfv(index, pname, params);
    check();
}
