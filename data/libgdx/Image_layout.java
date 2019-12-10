public void layout() {
    if (drawable == null)
        return;
    float regionWidth = drawable.getMinWidth();
    float regionHeight = drawable.getMinHeight();
    float width = getWidth();
    float height = getHeight();
    Vector2 size = scaling.apply(regionWidth, regionHeight, width, height);
    imageWidth = size.x;
    imageHeight = size.y;
    if ((align & Align.left) != 0)
        imageX = 0;
    else if ((align & Align.right) != 0)
        imageX = (int) (width - imageWidth);
    else
        imageX = (int) (width / 2 - imageWidth / 2);
    if ((align & Align.top) != 0)
        imageY = (int) (height - imageHeight);
    else if ((align & Align.bottom) != 0)
        imageY = 0;
    else
        imageY = (int) (height / 2 - imageHeight / 2);
}
