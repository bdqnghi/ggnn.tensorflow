/**
 * Using the specified string, populates the glyphs and positions of the specified glyph run.
 * @param str Characters to convert to glyphs. Will not contain newline or color tags. May contain "[[" for an escaped left
 *           square bracket.
 * @param tightBounds If true, the first {@link GlyphRun#xAdvances} entry is offset to prevent the first glyph from being
 *           drawn left of 0 and the last entry is offset to prevent the last glyph from being drawn right of the run
 *           width.
 */
public void getGlyphs(GlyphRun run, CharSequence str, int start, int end, boolean tightBounds) {
    boolean markupEnabled = this.markupEnabled;
    float scaleX = this.scaleX;
    Glyph missingGlyph = this.missingGlyph;
    Array<Glyph> glyphs = run.glyphs;
    FloatArray xAdvances = run.xAdvances;
    // Guess at number of glyphs needed.
    glyphs.ensureCapacity(end - start);
    xAdvances.ensureCapacity(end - start + 1);
    Glyph lastGlyph = null;
    while (start < end) {
        char ch = str.charAt(start++);
        Glyph glyph = getGlyph(ch);
        if (glyph == null) {
            if (missingGlyph == null)
                continue;
            glyph = missingGlyph;
        }
        glyphs.add(glyph);
        if (// First glyph.
        lastGlyph == null)
            xAdvances.add((!tightBounds || glyph.fixedWidth) ? 0 : -glyph.xoffset * scaleX - padLeft);
        else
            xAdvances.add((lastGlyph.xadvance + lastGlyph.getKerning(ch)) * scaleX);
        lastGlyph = glyph;
        // "[[" is an escaped left square bracket, skip second character.
        if (markupEnabled && ch == '[' && start < end && str.charAt(start) == '[')
            start++;
    }
    if (lastGlyph != null) {
        float lastGlyphWidth = (!tightBounds || lastGlyph.fixedWidth) ? lastGlyph.xadvance : lastGlyph.xoffset + lastGlyph.width - padRight;
        xAdvances.add(lastGlyphWidth * scaleX);
    }
}
