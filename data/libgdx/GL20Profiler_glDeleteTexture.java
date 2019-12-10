@Override
public void glDeleteTexture(int texture) {
    calls++;
    gl20.glDeleteTexture(texture);
    check();
}
