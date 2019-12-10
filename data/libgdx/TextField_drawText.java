protected void drawText(Batch batch, BitmapFont font, float x, float y) {
    font.draw(batch, displayText, x + textOffset, y, visibleTextStart, visibleTextEnd, 0, Align.left, false);
}
