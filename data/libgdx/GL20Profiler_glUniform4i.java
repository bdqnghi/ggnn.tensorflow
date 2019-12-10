@Override
public void glUniform4i(int location, int x, int y, int z, int w) {
    calls++;
    gl20.glUniform4i(location, x, y, z, w);
    check();
}
