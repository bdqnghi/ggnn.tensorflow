@Override
public void glAttachShader(int program, int shader) {
    calls++;
    gl30.glAttachShader(program, shader);
    check();
}
