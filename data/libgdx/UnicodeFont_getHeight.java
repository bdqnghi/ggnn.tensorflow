public int getHeight(String text) {
    if (text == null)
        throw new IllegalArgumentException("text cannot be null.");
    if (text.length() == 0)
        return 0;
    char[] chars = text.toCharArray();
    GlyphVector vector = font.layoutGlyphVector(GlyphPage.renderContext, chars, 0, chars.length, Font.LAYOUT_LEFT_TO_RIGHT);
    int lines = 0, height = 0;
    for (int i = 0, n = vector.getNumGlyphs(); i < n; i++) {
        int charIndex = vector.getGlyphCharIndex(i);
        int codePoint = text.codePointAt(charIndex);
        if (codePoint == ' ')
            continue;
        Rectangle bounds = getGlyphBounds(vector, i, codePoint);
        height = Math.max(height, ascent + bounds.y + bounds.height);
        if (codePoint == '\n') {
            lines++;
            height = 0;
        }
    }
    return lines * getLineHeight() + height;
}
