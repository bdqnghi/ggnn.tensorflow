public void glDeleteTextures(int n, IntBuffer textures) {
    GL.glDeleteTextures(n, textures, getPosition(textures));
}
