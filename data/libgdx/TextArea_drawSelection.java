@Override
protected void drawSelection(Drawable selection, Batch batch, BitmapFont font, float x, float y) {
    int i = firstLineShowing * 2;
    float offsetY = 0;
    int minIndex = Math.min(cursor, selectionStart);
    int maxIndex = Math.max(cursor, selectionStart);
    while (i + 1 < linesBreak.size && i < (firstLineShowing + linesShowing) * 2) {
        int lineStart = linesBreak.get(i);
        int lineEnd = linesBreak.get(i + 1);
        if (!((minIndex < lineStart && minIndex < lineEnd && maxIndex < lineStart && maxIndex < lineEnd) || (minIndex > lineStart && minIndex > lineEnd && maxIndex > lineStart && maxIndex > lineEnd))) {
            int start = Math.max(linesBreak.get(i), minIndex);
            int end = Math.min(linesBreak.get(i + 1), maxIndex);
            float selectionX = glyphPositions.get(start) - glyphPositions.get(linesBreak.get(i));
            float selectionWidth = glyphPositions.get(end) - glyphPositions.get(start);
            selection.draw(batch, x + selectionX + fontOffset, y - textHeight - font.getDescent() - offsetY, selectionWidth, font.getLineHeight());
        }
        offsetY += font.getLineHeight();
        i += 2;
    }
}
