/**
 * @return May be null.
 */
private Glyph getGlyph(char c) {
    char[] chars = { c };
    GlyphVector vector = unicodeFont.getFont().layoutGlyphVector(GlyphPage.renderContext, chars, 0, chars.length, Font.LAYOUT_LEFT_TO_RIGHT);
    Rectangle bounds = vector.getGlyphPixelBounds(0, GlyphPage.renderContext, 0, 0);
    return unicodeFont.getGlyph(vector.getGlyphCode(0), c, bounds, vector, 0);
}
