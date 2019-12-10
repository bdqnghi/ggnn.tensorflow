@Override
public void glValidateProgram(int program) {
    calls++;
    gl30.glValidateProgram(program);
    check();
}
