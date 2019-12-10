@Override
public void glGetVertexAttribIiv(int index, int pname, IntBuffer params) {
    calls++;
    gl30.glGetVertexAttribIiv(index, pname, params);
    check();
}
