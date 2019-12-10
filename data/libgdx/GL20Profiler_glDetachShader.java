@Override
public void glDetachShader(int program, int shader) {
    calls++;
    gl20.glDetachShader(program, shader);
    check();
}
