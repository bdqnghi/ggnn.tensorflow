/**
 * Adds all named texture regions from the atlas. The atlas will not be automatically disposed when the skin is disposed.
 */
public void addRegions(TextureAtlas atlas) {
    Array<AtlasRegion> regions = atlas.getRegions();
    for (int i = 0, n = regions.size; i < n; i++) {
        AtlasRegion region = regions.get(i);
        add(region.name, region, TextureRegion.class);
    }
}
