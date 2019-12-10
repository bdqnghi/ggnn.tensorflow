public void setRegion(TextureRegion region) {
    this.region = region;
    setMinWidth(region.getRegionWidth());
    setMinHeight(region.getRegionHeight());
}
