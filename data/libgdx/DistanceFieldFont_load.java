protected void load(BitmapFontData data) {
    super.load(data);
    // Distance field font rendering requires font texture to be filtered linear.
    final Array<TextureRegion> regions = getRegions();
    for (TextureRegion region : regions) region.getTexture().setFilter(TextureFilter.Linear, TextureFilter.Linear);
}
