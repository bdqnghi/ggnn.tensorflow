private int getGlyphCode(Font font, int codePoint) {
    char[] chars = Character.toChars(codePoint);
    GlyphVector vector = font.layoutGlyphVector(GlyphPage.renderContext, chars, 0, chars.length, Font.LAYOUT_LEFT_TO_RIGHT);
    return vector.getGlyphCode(0);
}
