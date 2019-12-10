@Override
protected void drawText(Batch batch, BitmapFont font, float x, float y) {
    float offsetY = 0;
    for (int i = firstLineShowing * 2; i < (firstLineShowing + linesShowing) * 2 && i < linesBreak.size; i += 2) {
        font.draw(batch, displayText, x, y + offsetY, linesBreak.items[i], linesBreak.items[i + 1], 0, Align.left, false);
        offsetY -= font.getLineHeight();
    }
}
