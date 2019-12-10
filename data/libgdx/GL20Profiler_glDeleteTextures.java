@Override
public void glDeleteTextures(int n, IntBuffer textures) {
    calls++;
    gl20.glDeleteTextures(n, textures);
    check();
}
