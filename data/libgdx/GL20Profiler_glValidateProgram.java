@Override
public void glValidateProgram(int program) {
    calls++;
    gl20.glValidateProgram(program);
    check();
}
