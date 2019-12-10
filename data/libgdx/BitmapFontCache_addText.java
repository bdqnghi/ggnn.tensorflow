/**
 * Adds the specified glyphs.
 */
public void addText(GlyphLayout layout, float x, float y) {
    addToCache(layout, x, y + font.data.ascent);
}
