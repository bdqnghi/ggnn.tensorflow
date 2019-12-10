public void setGlyph(int ch, Glyph glyph) {
    Glyph[] page = glyphs[ch / PAGE_SIZE];
    if (page == null)
        glyphs[ch / PAGE_SIZE] = page = new Glyph[PAGE_SIZE];
    page[ch & PAGE_SIZE - 1] = glyph;
}
