public int getWidth(String text) {
    if (text == null)
        throw new IllegalArgumentException("text cannot be null.");
    if (text.length() == 0)
        return 0;
    char[] chars = text.toCharArray();
    GlyphVector vector = font.layoutGlyphVector(GlyphPage.renderContext, chars, 0, chars.length, Font.LAYOUT_LEFT_TO_RIGHT);
    int width = 0;
    int extraX = 0;
    boolean startNewLine = false;
    for (int glyphIndex = 0, n = vector.getNumGlyphs(); glyphIndex < n; glyphIndex++) {
        int charIndex = vector.getGlyphCharIndex(glyphIndex);
        int codePoint = text.codePointAt(charIndex);
        Rectangle bounds = getGlyphBounds(vector, glyphIndex, codePoint);
        if (startNewLine && codePoint != '\n')
            extraX = -bounds.x;
        if (glyphIndex > 0)
            extraX += paddingLeft + paddingRight + paddingAdvanceX;
        width = Math.max(width, bounds.x + extraX + bounds.width);
        if (codePoint == '\n')
            startNewLine = true;
    }
    return width;
}
