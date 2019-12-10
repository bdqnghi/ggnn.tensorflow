@Override
public int glCreateProgram() {
    calls++;
    int result = gl30.glCreateProgram();
    check();
    return result;
}
