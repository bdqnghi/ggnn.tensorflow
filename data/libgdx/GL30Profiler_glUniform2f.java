@Override
public void glUniform2f(int location, float x, float y) {
    calls++;
    gl30.glUniform2f(location, x, y);
    check();
}
