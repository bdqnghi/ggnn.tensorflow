@Override
public void glShaderSource(int shader, String source) {
    super.glShaderSource(shader, source);
    checkError();
}
