/**
 * Returns all regions with the specified name, ordered by smallest to largest {@link AtlasRegion#index index}. This method
 * uses string comparison to find the regions, so the result should be cached rather than calling this method multiple times.
 */
public Array<AtlasRegion> findRegions(String name) {
    Array<AtlasRegion> matched = new Array();
    for (int i = 0, n = regions.size; i < n; i++) {
        AtlasRegion region = regions.get(i);
        if (region.name.equals(name))
            matched.add(new AtlasRegion(region));
    }
    return matched;
}
