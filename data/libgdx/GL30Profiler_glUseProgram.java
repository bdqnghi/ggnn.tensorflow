@Override
public void glUseProgram(int program) {
    shaderSwitches++;
    calls++;
    gl30.glUseProgram(program);
    check();
}
