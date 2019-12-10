/**
 * Tints all text currently in the cache. Does not affect subsequently added text.
 */
public void tint(Color tint) {
    float newTint = tint.toFloatBits();
    if (currentTint == newTint)
        return;
    currentTint = newTint;
    int[] tempGlyphCount = this.tempGlyphCount;
    for (int i = 0, n = tempGlyphCount.length; i < n; i++) tempGlyphCount[i] = 0;
    for (int i = 0, n = layouts.size; i < n; i++) {
        GlyphLayout layout = layouts.get(i);
        for (int ii = 0, nn = layout.runs.size; ii < nn; ii++) {
            GlyphRun run = layout.runs.get(ii);
            Array<Glyph> glyphs = run.glyphs;
            float colorFloat = tempColor.set(run.color).mul(tint).toFloatBits();
            for (int iii = 0, nnn = glyphs.size; iii < nnn; iii++) {
                Glyph glyph = glyphs.get(iii);
                int page = glyph.page;
                int offset = tempGlyphCount[page] * 20 + 2;
                tempGlyphCount[page]++;
                float[] vertices = pageVertices[page];
                for (int v = 0; v < 20; v += 5) vertices[offset + v] = colorFloat;
            }
        }
    }
}
