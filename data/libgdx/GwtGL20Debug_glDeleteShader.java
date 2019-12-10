@Override
public void glDeleteShader(int shader) {
    super.glDeleteShader(shader);
    checkError();
}
