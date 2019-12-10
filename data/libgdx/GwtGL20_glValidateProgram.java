@Override
public void glValidateProgram(int program) {
    gl.validateProgram(programs.get(program));
}
