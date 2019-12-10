@Override
public void glDeleteShader(int shader) {
    calls++;
    gl30.glDeleteShader(shader);
    check();
}
