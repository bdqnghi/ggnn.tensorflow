@Override
public void glGetUniformiv(int program, int location, IntBuffer params) {
    calls++;
    gl20.glGetUniformiv(program, location, params);
    check();
}
