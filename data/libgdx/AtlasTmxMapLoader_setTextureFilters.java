private void setTextureFilters(TextureFilter min, TextureFilter mag) {
    for (Texture texture : trackedTextures) {
        texture.setFilter(min, mag);
    }
    trackedTextures.clear();
}
