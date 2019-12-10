/**
 * Draws selection rectangle *
 */
protected void drawSelection(Drawable selection, Batch batch, BitmapFont font, float x, float y) {
    selection.draw(batch, x + selectionX + renderOffset + fontOffset, y - textHeight - font.getDescent(), selectionWidth, textHeight);
}
