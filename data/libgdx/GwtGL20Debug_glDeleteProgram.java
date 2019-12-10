@Override
public void glDeleteProgram(int program) {
    super.glDeleteProgram(program);
    checkError();
}
