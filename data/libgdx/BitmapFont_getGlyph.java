/**
 * Returns the glyph for the specified character, or null if no such glyph exists. Note that
 * {@link #getGlyphs(GlyphRun, CharSequence, int, int, boolean)} should be be used to shape a string of characters into a
 * list of glyphs.
 */
public Glyph getGlyph(char ch) {
    Glyph[] page = glyphs[ch / PAGE_SIZE];
    if (page != null)
        return page[ch & PAGE_SIZE - 1];
    return null;
}
