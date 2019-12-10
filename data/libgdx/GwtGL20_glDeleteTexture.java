@Override
public void glDeleteTexture(int id) {
    WebGLTexture texture = this.textures.get(id);
    deallocateTextureId(id);
    gl.deleteTexture(texture);
}
