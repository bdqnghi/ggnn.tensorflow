/**
 * Makes the specified glyphs fixed width. This can be useful to make the numbers in a font fixed width. Eg, when horizontally
 * centering a score or loading percentage text, it will not jump around as different numbers are shown.
 */
public void setFixedWidthGlyphs(CharSequence glyphs) {
    BitmapFontData data = this.data;
    int maxAdvance = 0;
    for (int index = 0, end = glyphs.length(); index < end; index++) {
        Glyph g = data.getGlyph(glyphs.charAt(index));
        if (g != null && g.xadvance > maxAdvance)
            maxAdvance = g.xadvance;
    }
    for (int index = 0, end = glyphs.length(); index < end; index++) {
        Glyph g = data.getGlyph(glyphs.charAt(index));
        if (g == null)
            continue;
        g.xoffset += Math.round((maxAdvance - g.xadvance) / 2);
        g.xadvance = maxAdvance;
        g.kerning = null;
        g.fixedWidth = true;
    }
}
