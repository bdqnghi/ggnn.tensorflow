public void glGetProgramiv(int program, int pname, IntBuffer params) {
    GL.glGetProgramiv(program, pname, params, getPosition(params));
}
