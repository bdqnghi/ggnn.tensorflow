/**
 * Returns all regions with the specified name as sprites, ordered by smallest to largest {@link AtlasRegion#index index}. This
 * method uses string comparison to find the regions and constructs new sprites, so the result should be cached rather than
 * calling this method multiple times.
 * @see #createSprite(String)
 */
public Array<Sprite> createSprites(String name) {
    Array<Sprite> matched = new Array();
    for (int i = 0, n = regions.size; i < n; i++) {
        AtlasRegion region = regions.get(i);
        if (region.name.equals(name))
            matched.add(newSprite(region));
    }
    return matched;
}
