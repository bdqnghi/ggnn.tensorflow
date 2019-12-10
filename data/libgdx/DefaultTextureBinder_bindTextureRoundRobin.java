private final int bindTextureRoundRobin(final GLTexture texture) {
    for (int i = 0; i < count; i++) {
        final int idx = (currentTexture + i) % count;
        if (textures[idx] == texture) {
            reused = true;
            return idx;
        }
    }
    currentTexture = (currentTexture + 1) % count;
    textures[currentTexture] = texture;
    texture.bind(offset + currentTexture);
    return currentTexture;
}
