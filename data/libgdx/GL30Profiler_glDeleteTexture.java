@Override
public void glDeleteTexture(int texture) {
    calls++;
    gl30.glDeleteTexture(texture);
    check();
}
