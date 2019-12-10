private void truncate(BitmapFontData fontData, GlyphRun run, float targetWidth, String truncate, int widthIndex, Pool<GlyphRun> glyphRunPool) {
    // Determine truncate string size.
    GlyphRun truncateRun = glyphRunPool.obtain();
    fontData.getGlyphs(truncateRun, truncate, 0, truncate.length(), true);
    float truncateWidth = 0;
    for (int i = 1, n = truncateRun.xAdvances.size; i < n; i++) truncateWidth += truncateRun.xAdvances.get(i);
    targetWidth -= truncateWidth;
    // Determine visible glyphs.
    int count = 0;
    float width = run.x;
    while (count < run.xAdvances.size) {
        float xAdvance = run.xAdvances.get(count);
        width += xAdvance;
        if (width > targetWidth) {
            run.width = width - run.x - xAdvance;
            break;
        }
        count++;
    }
    if (count > 1) {
        // Some run glyphs fit, append truncate glyphs.
        run.glyphs.truncate(count - 1);
        run.xAdvances.truncate(count);
        adjustLastGlyph(fontData, run);
        if (truncateRun.xAdvances.size > 0)
            run.xAdvances.addAll(truncateRun.xAdvances, 1, truncateRun.xAdvances.size - 1);
    } else {
        // No run glyphs fit, use only truncate glyphs.
        run.glyphs.clear();
        run.xAdvances.clear();
        run.xAdvances.addAll(truncateRun.xAdvances);
        if (truncateRun.xAdvances.size > 0)
            run.width += truncateRun.xAdvances.get(0);
    }
    run.glyphs.addAll(truncateRun.glyphs);
    run.width += truncateWidth;
    glyphRunPool.free(truncateRun);
}
