@Override
public void glDetachShader(int program, int shader) {
    super.glDetachShader(program, shader);
    checkError();
}
