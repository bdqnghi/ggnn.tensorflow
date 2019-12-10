@Override
public void glGetVertexAttribiv(int index, int pname, IntBuffer params) {
    calls++;
    gl20.glGetVertexAttribiv(index, pname, params);
    check();
}
