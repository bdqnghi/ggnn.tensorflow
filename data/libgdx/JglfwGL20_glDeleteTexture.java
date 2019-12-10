public void glDeleteTexture(int texture) {
    glDeleteTextures(1, toIntBuffer(texture));
}
