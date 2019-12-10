/**
 * Loads up to the specified number of queued glyphs to the backing textures. This is typically called from the game loop to
 * load glyphs on the fly that were requested for display but have not yet been loaded.
 */
public boolean loadGlyphs(int maxGlyphsToLoad) {
    if (queuedGlyphs.isEmpty())
        return false;
    if (effects.isEmpty())
        throw new IllegalStateException("The UnicodeFont must have at least one effect before any glyphs can be loaded.");
    for (Iterator iter = queuedGlyphs.iterator(); iter.hasNext(); ) {
        Glyph glyph = (Glyph) iter.next();
        int codePoint = glyph.getCodePoint();
        // Only load the first missing glyph.
        if (glyph.isMissing()) {
            if (missingGlyph != null) {
                if (glyph != missingGlyph)
                    iter.remove();
                continue;
            }
            missingGlyph = glyph;
        }
    }
    Collections.sort(queuedGlyphs, heightComparator);
    // Add to existing pages.
    for (Iterator iter = glyphPages.iterator(); iter.hasNext(); ) {
        GlyphPage glyphPage = (GlyphPage) iter.next();
        maxGlyphsToLoad -= glyphPage.loadGlyphs(queuedGlyphs, maxGlyphsToLoad);
        if (maxGlyphsToLoad == 0 || queuedGlyphs.isEmpty())
            return true;
    }
    // Add to new pages.
    while (!queuedGlyphs.isEmpty()) {
        GlyphPage glyphPage = new GlyphPage(this, glyphPageWidth, glyphPageHeight);
        glyphPages.add(glyphPage);
        maxGlyphsToLoad -= glyphPage.loadGlyphs(queuedGlyphs, maxGlyphsToLoad);
        if (maxGlyphsToLoad == 0)
            return true;
    }
    return true;
}
