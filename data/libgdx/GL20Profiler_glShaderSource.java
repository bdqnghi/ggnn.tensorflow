@Override
public void glShaderSource(int shader, String string) {
    calls++;
    gl20.glShaderSource(shader, string);
    check();
}
