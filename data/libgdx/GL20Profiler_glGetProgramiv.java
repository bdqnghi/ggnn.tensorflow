@Override
public void glGetProgramiv(int program, int pname, IntBuffer params) {
    calls++;
    gl20.glGetProgramiv(program, pname, params);
    check();
}
