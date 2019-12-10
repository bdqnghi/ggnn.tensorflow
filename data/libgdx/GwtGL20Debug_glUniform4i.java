@Override
public void glUniform4i(int location, int x, int y, int z, int w) {
    super.glUniform4i(location, x, y, z, w);
    checkError();
}
