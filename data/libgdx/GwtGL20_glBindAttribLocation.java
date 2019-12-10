@Override
public void glBindAttribLocation(int program, int index, String name) {
    WebGLProgram glProgram = programs.get(program);
    gl.bindAttribLocation(glProgram, index, name);
}
