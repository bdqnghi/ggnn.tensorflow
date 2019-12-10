@Override
public void glUniform3f(int location, float x, float y, float z) {
    calls++;
    gl20.glUniform3f(location, x, y, z);
    check();
}
