/**
 * Returns the first region found with the specified name and index as a sprite. This method uses string comparison to find the
 * region and constructs a new sprite, so the result should be cached rather than calling this method multiple times.
 * @return The sprite, or null.
 * @see #createSprite(String)
 */
public Sprite createSprite(String name, int index) {
    for (int i = 0, n = regions.size; i < n; i++) {
        AtlasRegion region = regions.get(i);
        if (!region.name.equals(name))
            continue;
        if (region.index != index)
            continue;
        return newSprite(regions.get(i));
    }
    return null;
}
