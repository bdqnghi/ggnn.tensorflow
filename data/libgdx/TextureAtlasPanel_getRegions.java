protected Array<TextureRegion> getRegions(Texture texture, Array<AtlasRegion> atlasRegions, Array<TextureRegion> out) {
    out.clear();
    for (TextureRegion region : atlasRegions) {
        if (region.getTexture() == texture)
            out.add(region);
    }
    return out;
}
