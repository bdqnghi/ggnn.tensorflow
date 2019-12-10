private void load(TextureAtlasData data) {
    ObjectMap<Page, Texture> pageToTexture = new ObjectMap<Page, Texture>();
    for (Page page : data.pages) {
        Texture texture = null;
        if (page.texture == null) {
            texture = new Texture(page.textureFile, page.format, page.useMipMaps);
            texture.setFilter(page.minFilter, page.magFilter);
            texture.setWrap(page.uWrap, page.vWrap);
        } else {
            texture = page.texture;
            texture.setFilter(page.minFilter, page.magFilter);
            texture.setWrap(page.uWrap, page.vWrap);
        }
        textures.add(texture);
        pageToTexture.put(page, texture);
    }
    for (Region region : data.regions) {
        int width = region.width;
        int height = region.height;
        AtlasRegion atlasRegion = new AtlasRegion(pageToTexture.get(region.page), region.left, region.top, region.rotate ? height : width, region.rotate ? width : height);
        atlasRegion.index = region.index;
        atlasRegion.name = region.name;
        atlasRegion.offsetX = region.offsetX;
        atlasRegion.offsetY = region.offsetY;
        atlasRegion.originalHeight = region.originalHeight;
        atlasRegion.originalWidth = region.originalWidth;
        atlasRegion.rotate = region.rotate;
        atlasRegion.splits = region.splits;
        atlasRegion.pads = region.pads;
        if (region.flip)
            atlasRegion.flip(false, true);
        regions.add(atlasRegion);
    }
}
