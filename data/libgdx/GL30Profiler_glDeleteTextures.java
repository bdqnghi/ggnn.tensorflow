@Override
public void glDeleteTextures(int n, IntBuffer textures) {
    calls++;
    gl30.glDeleteTextures(n, textures);
    check();
}
