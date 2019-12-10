@Override
public void glGetUniformiv(int program, int location, IntBuffer params) {
    calls++;
    gl30.glGetUniformiv(program, location, params);
    check();
}
