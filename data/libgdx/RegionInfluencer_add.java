public void add(TextureRegion... regions) {
    this.regions.ensureCapacity(regions.length);
    for (TextureRegion region : regions) {
        this.regions.add(new AspectTextureRegion(region));
    }
}
