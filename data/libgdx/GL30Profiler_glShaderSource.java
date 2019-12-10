@Override
public void glShaderSource(int shader, String string) {
    calls++;
    gl30.glShaderSource(shader, string);
    check();
}
