@Override
public boolean glIsProgram(int program) {
    calls++;
    boolean result = gl30.glIsProgram(program);
    check();
    return result;
}
