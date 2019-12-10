@Override
public String glGetProgramInfoLog(int program) {
    return gl.getProgramInfoLog(programs.get(program));
}
