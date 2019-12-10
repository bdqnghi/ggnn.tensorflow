/**
 * Removes all glyphs in the cache.
 */
public void clear() {
    x = 0;
    y = 0;
    Pools.freeAll(pooledLayouts, true);
    pooledLayouts.clear();
    layouts.clear();
    for (int i = 0, n = idx.length; i < n; i++) {
        if (pageGlyphIndices != null)
            pageGlyphIndices[i].clear();
        idx[i] = 0;
    }
}
