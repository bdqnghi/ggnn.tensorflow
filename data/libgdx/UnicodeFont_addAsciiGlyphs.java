/**
 * Queues the glyphs in the ASCII character set (codepoints 32 through 255) to be loaded. Note that the glyphs are not
 * actually loaded until {@link #loadGlyphs()} is called.
 */
public void addAsciiGlyphs() {
    addGlyphs(32, 255);
}
