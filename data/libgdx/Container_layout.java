public void layout() {
    if (actor == null)
        return;
    float padLeft = this.padLeft.get(this), padBottom = this.padBottom.get(this);
    float containerWidth = getWidth() - padLeft - padRight.get(this);
    float containerHeight = getHeight() - padBottom - padTop.get(this);
    float minWidth = this.minWidth.get(actor), minHeight = this.minHeight.get(actor);
    float prefWidth = this.prefWidth.get(actor), prefHeight = this.prefHeight.get(actor);
    float maxWidth = this.maxWidth.get(actor), maxHeight = this.maxHeight.get(actor);
    float width;
    if (fillX > 0)
        width = containerWidth * fillX;
    else
        width = Math.min(prefWidth, containerWidth);
    if (width < minWidth)
        width = minWidth;
    if (maxWidth > 0 && width > maxWidth)
        width = maxWidth;
    float height;
    if (fillY > 0)
        height = containerHeight * fillY;
    else
        height = Math.min(prefHeight, containerHeight);
    if (height < minHeight)
        height = minHeight;
    if (maxHeight > 0 && height > maxHeight)
        height = maxHeight;
    float x = padLeft;
    if ((align & Align.right) != 0)
        x += containerWidth - width;
    else if (// center
    (align & Align.left) == 0)
        x += (containerWidth - width) / 2;
    float y = padBottom;
    if ((align & Align.top) != 0)
        y += containerHeight - height;
    else if (// center
    (align & Align.bottom) == 0)
        y += (containerHeight - height) / 2;
    if (round) {
        x = Math.round(x);
        y = Math.round(y);
        width = Math.round(width);
        height = Math.round(height);
    }
    actor.setBounds(x, y, width, height);
    if (actor instanceof Layout)
        ((Layout) actor).validate();
}
