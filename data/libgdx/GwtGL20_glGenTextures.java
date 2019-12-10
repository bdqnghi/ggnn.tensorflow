@Override
public void glGenTextures(int n, IntBuffer textures) {
    WebGLTexture texture = gl.createTexture();
    int id = allocateTextureId(texture);
    textures.put(id);
}
