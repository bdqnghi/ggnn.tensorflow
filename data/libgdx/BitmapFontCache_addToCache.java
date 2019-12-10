private void addToCache(GlyphLayout layout, float x, float y) {
    // Check if the number of font pages has changed.
    int pageCount = font.regions.size;
    if (pageVertices.length < pageCount) {
        float[][] newPageVertices = new float[pageCount][];
        System.arraycopy(pageVertices, 0, newPageVertices, 0, pageVertices.length);
        pageVertices = newPageVertices;
        int[] newIdx = new int[pageCount];
        System.arraycopy(idx, 0, newIdx, 0, idx.length);
        idx = newIdx;
        IntArray[] newPageGlyphIndices = new IntArray[pageCount];
        int pageGlyphIndicesLength = 0;
        if (pageGlyphIndices != null) {
            pageGlyphIndicesLength = pageGlyphIndices.length;
            System.arraycopy(pageGlyphIndices, 0, newPageGlyphIndices, 0, pageGlyphIndices.length);
        }
        for (int i = pageGlyphIndicesLength; i < pageCount; i++) newPageGlyphIndices[i] = new IntArray();
        pageGlyphIndices = newPageGlyphIndices;
        tempGlyphCount = new int[pageCount];
    }
    layouts.add(layout);
    requireGlyphs(layout);
    for (int i = 0, n = layout.runs.size; i < n; i++) {
        GlyphRun run = layout.runs.get(i);
        Array<Glyph> glyphs = run.glyphs;
        FloatArray xAdvances = run.xAdvances;
        float color = run.color.toFloatBits();
        float gx = x + run.x, gy = y + run.y;
        for (int ii = 0, nn = glyphs.size; ii < nn; ii++) {
            Glyph glyph = glyphs.get(ii);
            gx += xAdvances.get(ii);
            addGlyph(glyph, gx, gy, color);
        }
    }
    // Cached glyphs have changed, reset the current tint.
    currentTint = whiteTint;
}
