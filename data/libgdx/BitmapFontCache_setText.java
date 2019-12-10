/**
 * Clears any cached glyphs and adds the specified glyphs.
 * @see #addText(CharSequence, float, float, int, int, float, int, boolean, String)
 */
public void setText(GlyphLayout layout, float x, float y) {
    clear();
    addText(layout, x, y);
}
