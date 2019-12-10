public float getPrefWidth() {
    if (wrap)
        return 0;
    if (prefSizeInvalid)
        scaleAndComputePrefSize();
    float width = prefSize.x;
    Drawable background = style.background;
    if (background != null)
        width += background.getLeftWidth() + background.getRightWidth();
    return width;
}
