/**
 * Queues the glyphs in the specified text to be loaded. Note that the glyphs are not actually loaded until
 * {@link #loadGlyphs()} is called.
 */
public void addGlyphs(String text) {
    if (text == null)
        throw new IllegalArgumentException("text cannot be null.");
    char[] chars = text.toCharArray();
    GlyphVector vector = font.layoutGlyphVector(GlyphPage.renderContext, chars, 0, chars.length, Font.LAYOUT_LEFT_TO_RIGHT);
    for (int i = 0, n = vector.getNumGlyphs(); i < n; i++) {
        int codePoint = text.codePointAt(vector.getGlyphCharIndex(i));
        Rectangle bounds = getGlyphBounds(vector, i, codePoint);
        getGlyph(vector.getGlyphCode(i), codePoint, bounds, vector, i);
    }
}
