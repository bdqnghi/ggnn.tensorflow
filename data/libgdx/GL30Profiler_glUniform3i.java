@Override
public void glUniform3i(int location, int x, int y, int z) {
    calls++;
    gl30.glUniform3i(location, x, y, z);
    check();
}
