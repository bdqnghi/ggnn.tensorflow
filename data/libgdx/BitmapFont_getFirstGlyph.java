public Glyph getFirstGlyph() {
    for (Glyph[] page : this.glyphs) {
        if (page == null)
            continue;
        for (Glyph glyph : page) {
            if (glyph == null || glyph.height == 0 || glyph.width == 0)
                continue;
            return glyph;
        }
    }
    throw new GdxRuntimeException("No glyphs found.");
}
