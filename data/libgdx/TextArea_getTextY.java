@Override
protected float getTextY(BitmapFont font, Drawable background) {
    float textY = getHeight();
    if (background != null) {
        textY = (int) (textY - background.getTopHeight());
    }
    return textY;
}
