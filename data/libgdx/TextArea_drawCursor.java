@Override
protected void drawCursor(Drawable cursorPatch, Batch batch, BitmapFont font, float x, float y) {
    float textOffset = cursor >= glyphPositions.size || cursorLine * 2 >= linesBreak.size ? 0 : glyphPositions.get(cursor) - glyphPositions.get(linesBreak.items[cursorLine * 2]);
    cursorPatch.draw(batch, x + textOffset + fontOffset + font.getData().cursorX, y - font.getDescent() / 2 - (cursorLine - firstLineShowing + 1) * font.getLineHeight(), cursorPatch.getMinWidth(), font.getLineHeight());
}
