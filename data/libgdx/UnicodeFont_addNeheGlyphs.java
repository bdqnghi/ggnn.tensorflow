/**
 * Queues the glyphs in the NEHE character set (codepoints 32 through 128) to be loaded. Note that the glyphs are not actually
 * loaded until {@link #loadGlyphs()} is called.
 */
public void addNeheGlyphs() {
    addGlyphs(32, 32 + 96);
}
