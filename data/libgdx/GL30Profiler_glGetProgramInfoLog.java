@Override
public String glGetProgramInfoLog(int program) {
    calls++;
    String result = gl30.glGetProgramInfoLog(program);
    check();
    return result;
}
