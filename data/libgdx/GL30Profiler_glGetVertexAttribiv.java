@Override
public void glGetVertexAttribiv(int index, int pname, IntBuffer params) {
    calls++;
    gl30.glGetVertexAttribiv(index, pname, params);
    check();
}
