@Override
public int glGetUniformLocation(int program, String name) {
    calls++;
    int result = gl20.glGetUniformLocation(program, name);
    check();
    return result;
}
