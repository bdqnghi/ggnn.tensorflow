@Override
public void glDetachShader(int program, int shader) {
    calls++;
    gl30.glDetachShader(program, shader);
    check();
}
