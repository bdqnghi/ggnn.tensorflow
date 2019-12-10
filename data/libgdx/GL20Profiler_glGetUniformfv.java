@Override
public void glGetUniformfv(int program, int location, FloatBuffer params) {
    calls++;
    gl20.glGetUniformfv(program, location, params);
    check();
}
