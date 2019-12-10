/**
 * Returns the glyph for the specified codePoint. If the glyph does not exist yet, it is created and queued to be loaded.
 */
public Glyph getGlyph(int glyphCode, int codePoint, Rectangle bounds, GlyphVector vector, int index) {
    if (glyphCode < 0 || glyphCode >= MAX_GLYPH_CODE) {
        // GlyphVector#getGlyphCode sometimes returns negative numbers on OS X!?
        return new Glyph(codePoint, bounds, vector, index, this) {

            public boolean isMissing() {
                return true;
            }
        };
    }
    int pageIndex = glyphCode / PAGE_SIZE;
    int glyphIndex = glyphCode & (PAGE_SIZE - 1);
    Glyph glyph = null;
    Glyph[] page = glyphs[pageIndex];
    if (page != null) {
        glyph = page[glyphIndex];
        if (glyph != null)
            return glyph;
    } else
        page = glyphs[pageIndex] = new Glyph[PAGE_SIZE];
    // Add glyph so size information is available and queue it so its image can be loaded later.
    glyph = page[glyphIndex] = new Glyph(codePoint, bounds, vector, index, this);
    queuedGlyphs.add(glyph);
    return glyph;
}
