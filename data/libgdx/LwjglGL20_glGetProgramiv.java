public void glGetProgramiv(int program, int pname, IntBuffer params) {
    GL20.glGetProgram(program, pname, params);
}
