@Override
public String glGetProgramInfoLog(int program) {
    calls++;
    String result = gl20.glGetProgramInfoLog(program);
    check();
    return result;
}
