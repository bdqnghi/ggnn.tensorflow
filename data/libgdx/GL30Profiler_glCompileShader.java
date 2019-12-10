@Override
public void glCompileShader(int shader) {
    calls++;
    gl30.glCompileShader(shader);
    check();
}
