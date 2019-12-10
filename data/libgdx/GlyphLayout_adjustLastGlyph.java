/**
 * Adjusts the xadvance of the last glyph to use its width instead of xadvance.
 */
private void adjustLastGlyph(BitmapFontData fontData, GlyphRun run) {
    Glyph last = run.glyphs.peek();
    // Can happen when doing truncate.
    if (fontData.isWhitespace((char) last.id))
        return;
    float width = (last.xoffset + last.width) * fontData.scaleX - fontData.padRight;
    // Can cause the run width to be > targetWidth, but the problem is minimal.
    run.width += width - run.xAdvances.peek();
    run.xAdvances.set(run.xAdvances.size - 1, width);
}
