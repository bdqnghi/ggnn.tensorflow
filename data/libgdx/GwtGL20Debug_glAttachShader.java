@Override
public void glAttachShader(int program, int shader) {
    super.glAttachShader(program, shader);
    checkError();
}
