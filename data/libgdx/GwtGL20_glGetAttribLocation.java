@Override
public int glGetAttribLocation(int program, String name) {
    WebGLProgram prog = programs.get(program);
    return gl.getAttribLocation(prog, name);
}
