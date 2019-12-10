@Override
public int glCreateShader(int type) {
    calls++;
    int result = gl30.glCreateShader(type);
    check();
    return result;
}
