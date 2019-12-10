@Override
public void glVertexAttribI4ui(int index, int x, int y, int z, int w) {
    calls++;
    gl30.glVertexAttribI4ui(index, x, y, z, w);
    check();
}
