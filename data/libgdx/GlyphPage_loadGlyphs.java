/**
 * Loads glyphs to the backing texture and sets the image on each loaded glyph. Loaded glyphs are removed from the list.
 *
 * If this page already has glyphs and maxGlyphsToLoad is -1, then this method will return 0 if all the new glyphs don't fit.
 * This reduces texture binds when drawing since glyphs loaded at once are typically displayed together.
 * @param glyphs The glyphs to load.
 * @param maxGlyphsToLoad This is the maximum number of glyphs to load from the list. Set to -1 to attempt to load all the
 *           glyphs.
 * @return The number of glyphs that were actually loaded.
 */
int loadGlyphs(List glyphs, int maxGlyphsToLoad) {
    GL11.glColor4f(1, 1, 1, 1);
    texture.bind();
    int loadedCount = 0;
    for (Iterator iter = glyphs.iterator(); iter.hasNext(); ) {
        Glyph glyph = (Glyph) iter.next();
        int width = Math.min(MAX_GLYPH_SIZE, glyph.getWidth());
        int height = Math.min(MAX_GLYPH_SIZE, glyph.getHeight());
        if (width == 0 || height == 0)
            pageGlyphs.add(glyph);
        else {
            Row bestRow = null;
            // Fit in any row before the last.
            for (int ii = 0, nn = rows.size - 1; ii < nn; ii++) {
                Row row = rows.get(ii);
                if (row.x + width >= pageWidth)
                    continue;
                if (row.y + height >= pageHeight)
                    continue;
                if (height > row.height)
                    continue;
                if (bestRow == null || row.height < bestRow.height)
                    bestRow = row;
            }
            if (bestRow == null) {
                // Fit in last row, increasing height.
                Row row = rows.peek();
                if (row.y + height >= pageHeight)
                    continue;
                if (row.x + width < pageWidth) {
                    row.height = Math.max(row.height, height);
                    bestRow = row;
                } else {
                    // Fit in new row.
                    bestRow = new Row();
                    bestRow.y = row.y + row.height;
                    bestRow.height = height;
                    rows.add(bestRow);
                }
            }
            if (bestRow == null)
                continue;
            if (renderGlyph(glyph, bestRow.x, bestRow.y, width, height))
                bestRow.x += width;
        }
        iter.remove();
        loadedCount++;
        if (loadedCount == maxGlyphsToLoad)
            break;
    }
    return loadedCount;
}
