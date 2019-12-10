private void initializeFont(Font baseFont, int size, boolean bold, boolean italic) {
    Map attributes = baseFont.getAttributes();
    attributes.put(TextAttribute.SIZE, new Float(size));
    attributes.put(TextAttribute.WEIGHT, bold ? TextAttribute.WEIGHT_BOLD : TextAttribute.WEIGHT_REGULAR);
    attributes.put(TextAttribute.POSTURE, italic ? TextAttribute.POSTURE_OBLIQUE : TextAttribute.POSTURE_REGULAR);
    try {
        attributes.put(TextAttribute.class.getDeclaredField("KERNING").get(null), TextAttribute.class.getDeclaredField("KERNING_ON").get(null));
    } catch (Throwable ignored) {
    }
    font = baseFont.deriveFont(attributes);
    metrics = GlyphPage.scratchGraphics.getFontMetrics(font);
    ascent = metrics.getAscent();
    descent = metrics.getDescent();
    leading = metrics.getLeading();
    // Determine width of space glyph (getGlyphPixelBounds gives a width of zero).
    char[] chars = " ".toCharArray();
    GlyphVector vector = font.layoutGlyphVector(GlyphPage.renderContext, chars, 0, chars.length, Font.LAYOUT_LEFT_TO_RIGHT);
    spaceWidth = vector.getGlyphLogicalBounds(0).getBounds().width;
}
