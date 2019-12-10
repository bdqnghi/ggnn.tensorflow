@Override
public int glGetAttribLocation(int program, String name) {
    calls++;
    int result = gl20.glGetAttribLocation(program, name);
    check();
    return result;
}
