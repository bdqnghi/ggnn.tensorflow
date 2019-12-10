protected float getTextY(BitmapFont font, Drawable background) {
    float height = getHeight();
    float textY = textHeight / 2 + font.getDescent();
    if (background != null) {
        float bottom = background.getBottomHeight();
        textY = textY + (height - background.getTopHeight() - bottom) / 2 + bottom;
    } else {
        textY = textY + height / 2;
    }
    if (font.usesIntegerPositions())
        textY = (int) textY;
    return textY;
}
