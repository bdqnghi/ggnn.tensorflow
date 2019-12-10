@Override
public void glUniform3i(int location, int x, int y, int z) {
    calls++;
    gl20.glUniform3i(location, x, y, z);
    check();
}
