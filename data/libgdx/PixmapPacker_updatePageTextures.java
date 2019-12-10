/**
 * Calls {@link Page#updateTexture(TextureFilter, TextureFilter, boolean) updateTexture} for each page.
 */
public synchronized void updatePageTextures(TextureFilter minFilter, TextureFilter magFilter, boolean useMipMaps) {
    for (Page page : pages) page.updateTexture(minFilter, magFilter, useMipMaps);
}
