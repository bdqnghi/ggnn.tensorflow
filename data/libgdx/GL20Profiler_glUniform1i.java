@Override
public void glUniform1i(int location, int x) {
    calls++;
    gl20.glUniform1i(location, x);
    check();
}
