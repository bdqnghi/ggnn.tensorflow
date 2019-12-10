/**
 * Returns the first region found with the specified name and index. This method uses string comparison to find the region, so
 * the result should be cached rather than calling this method multiple times.
 * @return The region, or null.
 */
public AtlasRegion findRegion(String name, int index) {
    for (int i = 0, n = regions.size; i < n; i++) {
        AtlasRegion region = regions.get(i);
        if (!region.name.equals(name))
            continue;
        if (region.index != index)
            continue;
        return region;
    }
    return null;
}
