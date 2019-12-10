@Override
public boolean glIsProgram(int program) {
    return gl.isProgram(programs.get(program));
}
