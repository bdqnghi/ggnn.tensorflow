@Override
public void glGetUniformuiv(int program, int location, IntBuffer params) {
    calls++;
    gl30.glGetUniformuiv(program, location, params);
    check();
}
