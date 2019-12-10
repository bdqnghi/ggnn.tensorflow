/**
 * Updates the {@link TextureAtlas}, adding any new {@link Pixmap} instances packed since the last call to this method. This
 * can be used to insert Pixmap instances on a separate thread via {@link #pack(String, Pixmap)} and update the TextureAtlas on
 * the rendering thread. This method must be called on the rendering thread. After calling this method, disposing the packer
 * will no longer dispose the page pixmaps.
 */
public synchronized void updateTextureAtlas(TextureAtlas atlas, TextureFilter minFilter, TextureFilter magFilter, boolean useMipMaps) {
    updatePageTextures(minFilter, magFilter, useMipMaps);
    for (Page page : pages) {
        if (page.addedRects.size > 0) {
            for (String name : page.addedRects) {
                Rectangle rect = page.rects.get(name);
                TextureRegion region = new TextureRegion(page.texture, (int) rect.x, (int) rect.y, (int) rect.width, (int) rect.height);
                atlas.addRegion(name, region);
            }
            page.addedRects.clear();
            atlas.getTextures().add(page.texture);
        }
    }
}
