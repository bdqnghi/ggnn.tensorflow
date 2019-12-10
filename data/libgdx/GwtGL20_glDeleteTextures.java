@Override
public void glDeleteTextures(int n, IntBuffer textures) {
    for (int i = 0; i < n; i++) {
        int id = textures.get();
        WebGLTexture texture = this.textures.get(id);
        deallocateTextureId(id);
        gl.deleteTexture(texture);
    }
}
