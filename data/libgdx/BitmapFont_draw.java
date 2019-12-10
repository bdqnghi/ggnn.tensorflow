/**
 * Draws text at the specified position.
 * @see BitmapFontCache#addText(CharSequence, float, float, int, int, float, int, boolean, String)
 */
public void draw(Batch batch, GlyphLayout layout, float x, float y) {
    cache.clear();
    cache.addText(layout, x, y);
    cache.draw(batch);
}
