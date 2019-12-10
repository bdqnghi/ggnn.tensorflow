@Override
public int glGetAttribLocation(int program, String name) {
    calls++;
    int result = gl30.glGetAttribLocation(program, name);
    check();
    return result;
}
