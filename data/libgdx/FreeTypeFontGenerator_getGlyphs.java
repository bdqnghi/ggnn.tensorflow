public void getGlyphs(GlyphRun run, CharSequence str, int start, int end, boolean tightBounds) {
    // All glyphs added after this are packed directly to the texture.
    if (packer != null)
        packer.setPackToTexture(true);
    super.getGlyphs(run, str, start, end, tightBounds);
    if (dirty) {
        dirty = false;
        packer.updateTextureRegions(regions, parameter.minFilter, parameter.magFilter, parameter.genMipMaps);
    }
}
