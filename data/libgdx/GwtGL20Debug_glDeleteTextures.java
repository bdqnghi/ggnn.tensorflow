@Override
public void glDeleteTextures(int n, IntBuffer textures) {
    super.glDeleteTextures(n, textures);
    checkError();
}
