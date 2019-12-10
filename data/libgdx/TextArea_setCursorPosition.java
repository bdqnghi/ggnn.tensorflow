@Override
protected void setCursorPosition(float x, float y) {
    moveOffset = -1;
    Drawable background = style.background;
    BitmapFont font = style.font;
    float height = getHeight();
    if (background != null) {
        height -= background.getTopHeight();
        x -= background.getLeftWidth();
    }
    x = Math.max(0, x);
    if (background != null) {
        y -= background.getTopHeight();
    }
    cursorLine = (int) Math.floor((height - y) / font.getLineHeight()) + firstLineShowing;
    cursorLine = Math.max(0, Math.min(cursorLine, getLines() - 1));
    super.setCursorPosition(x, y);
    updateCurrentLine();
}
