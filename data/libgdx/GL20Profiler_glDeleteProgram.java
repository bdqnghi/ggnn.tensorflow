@Override
public void glDeleteProgram(int program) {
    calls++;
    gl20.glDeleteProgram(program);
    check();
}
