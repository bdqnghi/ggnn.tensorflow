@Override
public String glGetProgramInfoLog(int program) {
    String info = super.glGetProgramInfoLog(program);
    checkError();
    return info;
}
