@Override
public int glGetUniformLocation(int program, String name) {
    calls++;
    int result = gl30.glGetUniformLocation(program, name);
    check();
    return result;
}
