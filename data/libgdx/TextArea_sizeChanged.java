// OVERRIDE from TextField
@Override
protected void sizeChanged() {
    // Cause calculateOffsets to recalculate the line breaks.
    lastText = null;
    // The number of lines showed must be updated whenever the height is updated
    BitmapFont font = style.font;
    Drawable background = style.background;
    float availableHeight = getHeight() - (background == null ? 0 : background.getBottomHeight() + background.getTopHeight());
    linesShowing = (int) Math.floor(availableHeight / font.getLineHeight());
}
