@Override
public void glCompileShader(int shader) {
    calls++;
    gl20.glCompileShader(shader);
    check();
}
