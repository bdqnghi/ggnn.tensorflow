@Override
public boolean glIsProgram(int program) {
    calls++;
    boolean result = gl20.glIsProgram(program);
    check();
    return result;
}
