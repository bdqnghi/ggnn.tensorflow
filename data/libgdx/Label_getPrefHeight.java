public float getPrefHeight() {
    if (prefSizeInvalid)
        scaleAndComputePrefSize();
    float height = prefSize.y - style.font.getDescent() * fontScaleY * 2;
    Drawable background = style.background;
    if (background != null)
        height += background.getTopHeight() + background.getBottomHeight();
    return height;
}
