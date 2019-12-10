@Override
public void glGetProgramiv(int program, int pname, IntBuffer params) {
    calls++;
    gl30.glGetProgramiv(program, pname, params);
    check();
}
