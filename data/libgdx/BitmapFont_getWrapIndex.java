/**
 * Returns the first valid glyph index to use to wrap to the next line, starting at the specified start index and
 * (typically) moving toward the beginning of the glyphs array.
 */
public int getWrapIndex(Array<Glyph> glyphs, int start) {
    int i = start - 1;
    for (; i >= 1; i--) if (!isWhitespace((char) glyphs.get(i).id))
        break;
    for (; i >= 1; i--) {
        char ch = (char) glyphs.get(i).id;
        if (isWhitespace(ch) || isBreakChar(ch))
            return i + 1;
    }
    return 0;
}
