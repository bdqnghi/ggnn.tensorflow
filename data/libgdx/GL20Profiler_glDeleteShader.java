@Override
public void glDeleteShader(int shader) {
    calls++;
    gl20.glDeleteShader(shader);
    check();
}
