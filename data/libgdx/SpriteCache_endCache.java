/**
 * Ends the definition of a cache, returning the cache ID to be used with {@link #draw(int)}.
 */
public int endCache() {
    if (currentCache == null)
        throw new IllegalStateException("beginCache must be called before endCache.");
    Cache cache = currentCache;
    int cacheCount = mesh.getVerticesBuffer().position() - cache.offset;
    if (cache.textures == null) {
        // New cache.
        cache.maxCount = cacheCount;
        cache.textureCount = textures.size;
        cache.textures = textures.toArray(Texture.class);
        cache.counts = new int[cache.textureCount];
        for (int i = 0, n = counts.size; i < n; i++) cache.counts[i] = counts.get(i);
        mesh.getVerticesBuffer().flip();
    } else {
        // Redefine existing cache.
        if (cacheCount > cache.maxCount) {
            throw new GdxRuntimeException("If a cache is not the last created, it cannot be redefined with more entries than when it was first created: " + cacheCount + " (" + cache.maxCount + " max)");
        }
        cache.textureCount = textures.size;
        if (cache.textures.length < cache.textureCount)
            cache.textures = new Texture[cache.textureCount];
        for (int i = 0, n = cache.textureCount; i < n; i++) cache.textures[i] = textures.get(i);
        if (cache.counts.length < cache.textureCount)
            cache.counts = new int[cache.textureCount];
        for (int i = 0, n = cache.textureCount; i < n; i++) cache.counts[i] = counts.get(i);
        FloatBuffer vertices = mesh.getVerticesBuffer();
        vertices.position(0);
        Cache lastCache = caches.get(caches.size - 1);
        vertices.limit(lastCache.offset + lastCache.maxCount);
    }
    currentCache = null;
    textures.clear();
    counts.clear();
    return cache.id;
}
