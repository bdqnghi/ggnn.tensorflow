/**
 * Calls {@link Page#updateTexture(TextureFilter, TextureFilter, boolean) updateTexture} for each page and adds a region to
 * the specified array for each page texture.
 */
public synchronized void updateTextureRegions(Array<TextureRegion> regions, TextureFilter minFilter, TextureFilter magFilter, boolean useMipMaps) {
    updatePageTextures(minFilter, magFilter, useMipMaps);
    while (regions.size < pages.size) regions.add(new TextureRegion(pages.get(regions.size).texture));
}
