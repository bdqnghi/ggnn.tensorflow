@Override
public void glDeleteProgram(int program) {
    calls++;
    gl30.glDeleteProgram(program);
    check();
}
