private void requireGlyphs(GlyphLayout layout) {
    if (pageVertices.length == 1) {
        // Simpler counting if we just have one page.
        int newGlyphCount = 0;
        for (int i = 0, n = layout.runs.size; i < n; i++) newGlyphCount += layout.runs.get(i).glyphs.size;
        requirePageGlyphs(0, newGlyphCount);
    } else {
        int[] tempGlyphCount = this.tempGlyphCount;
        for (int i = 0, n = tempGlyphCount.length; i < n; i++) tempGlyphCount[i] = 0;
        // Determine # of glyphs in each page.
        for (int i = 0, n = layout.runs.size; i < n; i++) {
            Array<Glyph> glyphs = layout.runs.get(i).glyphs;
            for (int ii = 0, nn = glyphs.size; ii < nn; ii++) tempGlyphCount[glyphs.get(ii).page]++;
        }
        // Require that many for each page.
        for (int i = 0, n = tempGlyphCount.length; i < n; i++) requirePageGlyphs(i, tempGlyphCount[i]);
    }
}
