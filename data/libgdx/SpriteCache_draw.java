/**
 * Draws a subset of images defined for the specified cache ID.
 * @param offset The first image to render.
 * @param length The number of images from the first image (inclusive) to render.
 */
public void draw(int cacheID, int offset, int length) {
    if (!drawing)
        throw new IllegalStateException("SpriteCache.begin must be called before draw.");
    Cache cache = caches.get(cacheID);
    offset = offset * 6 + cache.offset;
    length *= 6;
    Texture[] textures = cache.textures;
    int[] counts = cache.counts;
    int textureCount = cache.textureCount;
    for (int i = 0; i < textureCount; i++) {
        textures[i].bind();
        int count = counts[i];
        if (count > length) {
            i = textureCount;
            count = length;
        } else
            length -= count;
        if (customShader != null)
            mesh.render(customShader, GL20.GL_TRIANGLES, offset, count);
        else
            mesh.render(shader, GL20.GL_TRIANGLES, offset, count);
        offset += count;
    }
    renderCalls += cache.textureCount;
    totalRenderCalls += textureCount;
}
