/**
 * Starts the redefinition of an existing cache, allowing the add and {@link #endCache()} methods to be called. If this is not
 * the last cache created, it cannot have more entries added to it than when it was first created. To do that, use
 * {@link #clear()} and then {@link #begin()}.
 */
public void beginCache(int cacheID) {
    if (currentCache != null)
        throw new IllegalStateException("endCache must be called before begin.");
    if (cacheID == caches.size - 1) {
        Cache oldCache = caches.removeIndex(cacheID);
        mesh.getVerticesBuffer().limit(oldCache.offset);
        beginCache();
        return;
    }
    currentCache = caches.get(cacheID);
    mesh.getVerticesBuffer().position(currentCache.offset);
}
