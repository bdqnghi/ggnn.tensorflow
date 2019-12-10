@Override
public void glUniform2i(int location, int x, int y) {
    calls++;
    gl20.glUniform2i(location, x, y);
    check();
}
