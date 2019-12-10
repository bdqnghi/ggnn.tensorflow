@Override
public int glCreateProgram() {
    calls++;
    int result = gl20.glCreateProgram();
    check();
    return result;
}
