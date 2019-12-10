@Override
public void glVertexAttribI4i(int index, int x, int y, int z, int w) {
    calls++;
    gl30.glVertexAttribI4i(index, x, y, z, w);
    check();
}
