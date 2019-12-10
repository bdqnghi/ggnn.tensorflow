public static int getWrapIndex(Array<Glyph> glyphs, int start) {
    for (int i = start; i > 0; i--) {
        int startChar = glyphs.get(i).id;
        if (!SimplifiedChinese.legalAtStart(startChar))
            continue;
        int endChar = glyphs.get(i - 1).id;
        if (!SimplifiedChinese.legalAtEnd(endChar))
            continue;
        // Don't wrap between ASCII chars.
        if (startChar < 127 && endChar < 127)
            continue;
        return i;
    }
    return start;
}
