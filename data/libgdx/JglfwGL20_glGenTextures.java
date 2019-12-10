public void glGenTextures(int n, IntBuffer textures) {
    GL.glGenTextures(n, textures, getPosition(textures));
}
