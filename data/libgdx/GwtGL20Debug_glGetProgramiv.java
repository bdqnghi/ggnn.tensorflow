@Override
public void glGetProgramiv(int program, int pname, IntBuffer params) {
    super.glGetProgramiv(program, pname, params);
    checkError();
}
