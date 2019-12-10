private int allocateTextureId(WebGLTexture texture) {
    int id = nextTextureId++;
    textures.put(id, texture);
    return id;
}
