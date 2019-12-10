@Override
public int glGetFragDataLocation(int program, String name) {
    calls++;
    final int result = gl30.glGetFragDataLocation(program, name);
    check();
    return result;
}
