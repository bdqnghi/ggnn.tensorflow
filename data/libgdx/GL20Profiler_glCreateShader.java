@Override
public int glCreateShader(int type) {
    calls++;
    int result = gl20.glCreateShader(type);
    check();
    return result;
}
