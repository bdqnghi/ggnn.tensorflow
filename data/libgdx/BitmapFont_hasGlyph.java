/**
 * Returns true if the font has the glyph, or if the font has a {@link #missingGlyph}.
 */
public boolean hasGlyph(char ch) {
    if (missingGlyph != null)
        return true;
    return getGlyph(ch) != null;
}
