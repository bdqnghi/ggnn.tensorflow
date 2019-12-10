public void setAtlas(TextureAtlas atlas) {
    if (atlas == this.atlas)
        return;
    regionsPanel.removeAll();
    Array<AtlasRegion> atlasRegions = atlas.getRegions();
    CustomCardLayout layout = (CustomCardLayout) regionsPanel.getLayout();
    Array<TextureRegion> regions = new Array<TextureRegion>();
    for (Texture texture : atlas.getTextures()) {
        FileTextureData file = (FileTextureData) texture.getTextureData();
        regionsPanel.add(new TexturePanel(texture, getRegions(texture, atlasRegions, regions)));
    }
    layout.first(regionsPanel);
    this.atlas = atlas;
}
