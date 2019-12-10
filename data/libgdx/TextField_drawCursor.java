protected void drawCursor(Drawable cursorPatch, Batch batch, BitmapFont font, float x, float y) {
    cursorPatch.draw(batch, x + textOffset + glyphPositions.get(cursor) - glyphPositions.get(visibleTextStart) + fontOffset + font.getData().cursorX, y - textHeight - font.getDescent(), cursorPatch.getMinWidth(), textHeight);
}
