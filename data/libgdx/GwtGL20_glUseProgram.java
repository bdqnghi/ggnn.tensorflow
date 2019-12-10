@Override
public void glUseProgram(int program) {
    currProgram = program;
    gl.useProgram(programs.get(program));
}
