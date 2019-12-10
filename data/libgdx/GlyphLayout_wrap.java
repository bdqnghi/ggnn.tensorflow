private GlyphRun wrap(BitmapFontData fontData, GlyphRun first, Pool<GlyphRun> glyphRunPool, int wrapIndex, int widthIndex) {
    GlyphRun second = glyphRunPool.obtain();
    second.color.set(first.color);
    int glyphCount = first.glyphs.size;
    // Increase first run width up to the end index.
    while (widthIndex < wrapIndex) first.width += first.xAdvances.get(widthIndex++);
    // Reduce first run width by the wrapped glyphs that have contributed to the width.
    while (widthIndex > wrapIndex + 1) first.width -= first.xAdvances.get(--widthIndex);
    // The second run will contain the remaining glyph data, so swap instances rather than copying to reduce large allocations.
    if (wrapIndex < glyphCount) {
        // Starts empty.
        Array<Glyph> glyphs1 = second.glyphs;
        // Starts with all the glyphs.
        Array<Glyph> glyphs2 = first.glyphs;
        glyphs1.addAll(glyphs2, 0, wrapIndex);
        glyphs2.removeRange(0, wrapIndex - 1);
        first.glyphs = glyphs1;
        second.glyphs = glyphs2;
        // Equivalent to:
        // second.glyphs.addAll(first.glyphs, wrapIndex, glyphCount - wrapIndex);
        // first.glyphs.truncate(wrapIndex);
        // Starts empty.
        FloatArray xAdvances1 = second.xAdvances;
        // Starts with all the xAdvances.
        FloatArray xAdvances2 = first.xAdvances;
        xAdvances1.addAll(xAdvances2, 0, wrapIndex + 1);
        // Leave first entry to be overwritten by next line.
        xAdvances2.removeRange(1, wrapIndex);
        xAdvances2.set(0, -glyphs2.first().xoffset * fontData.scaleX - fontData.padLeft);
        first.xAdvances = xAdvances1;
        second.xAdvances = xAdvances2;
    // Equivalent to:
    // second.xAdvances.add(-second.glyphs.first().xoffset * fontData.scaleX - fontData.padLeft);
    // second.xAdvances.addAll(first.xAdvances, wrapIndex + 1, first.xAdvances.size - (wrapIndex + 1));
    // first.xAdvances.truncate(wrapIndex + 1);
    }
    if (wrapIndex == 0) {
        // If the first run is now empty, remove it.
        glyphRunPool.free(first);
        runs.pop();
    } else
        adjustLastGlyph(fontData, first);
    return second;
}
