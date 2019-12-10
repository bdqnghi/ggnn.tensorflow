@Override
public void glUniform3i(int location, int x, int y, int z) {
    super.glUniform3i(location, x, y, z);
    checkError();
}
