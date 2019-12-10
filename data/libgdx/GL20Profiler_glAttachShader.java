@Override
public void glAttachShader(int program, int shader) {
    calls++;
    gl20.glAttachShader(program, shader);
    check();
}
