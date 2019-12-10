@Override
public void glUseProgram(int program) {
    shaderSwitches++;
    calls++;
    gl20.glUseProgram(program);
    check();
}
