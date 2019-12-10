/**
 * Returns the distance from the y drawing location to the top most pixel of the specified text.
 */
public int getYOffset(String text) {
    if (text == null)
        throw new IllegalArgumentException("text cannot be null.");
    if (renderType == RenderType.FreeType && bitmapFont != null)
        return (int) bitmapFont.getAscent();
    int index = text.indexOf('\n');
    if (index != -1)
        text = text.substring(0, index);
    char[] chars = text.toCharArray();
    GlyphVector vector = font.layoutGlyphVector(GlyphPage.renderContext, chars, 0, chars.length, Font.LAYOUT_LEFT_TO_RIGHT);
    int yOffset = ascent + vector.getPixelBounds(null, 0, 0).y;
    return yOffset;
}
