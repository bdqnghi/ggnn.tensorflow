private Sprite newSprite(AtlasRegion region) {
    if (region.packedWidth == region.originalWidth && region.packedHeight == region.originalHeight) {
        if (region.rotate) {
            Sprite sprite = new Sprite(region);
            sprite.setBounds(0, 0, region.getRegionHeight(), region.getRegionWidth());
            sprite.rotate90(true);
            return sprite;
        }
        return new Sprite(region);
    }
    return new AtlasSprite(region);
}
