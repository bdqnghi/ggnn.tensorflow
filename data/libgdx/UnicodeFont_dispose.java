/**
 * Releases all resources used by this UnicodeFont. This method should be called when this UnicodeFont instance is no longer
 * needed.
 */
public void dispose() {
    for (Iterator iter = glyphPages.iterator(); iter.hasNext(); ) {
        GlyphPage page = (GlyphPage) iter.next();
        page.getTexture().dispose();
    }
    if (bitmapFont != null) {
        bitmapFont.dispose();
        generator.dispose();
    }
}
