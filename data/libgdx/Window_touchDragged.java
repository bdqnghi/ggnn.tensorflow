public void touchDragged(InputEvent event, float x, float y, int pointer) {
    if (!dragging)
        return;
    float width = getWidth(), height = getHeight();
    float windowX = getX(), windowY = getY();
    float minWidth = getMinWidth(), maxWidth = getMaxWidth();
    float minHeight = getMinHeight(), maxHeight = getMaxHeight();
    Stage stage = getStage();
    boolean clampPosition = keepWithinStage && getParent() == stage.getRoot();
    if ((edge & MOVE) != 0) {
        float amountX = x - startX, amountY = y - startY;
        windowX += amountX;
        windowY += amountY;
    }
    if ((edge & Align.left) != 0) {
        float amountX = x - startX;
        if (width - amountX < minWidth)
            amountX = -(minWidth - width);
        if (clampPosition && windowX + amountX < 0)
            amountX = -windowX;
        width -= amountX;
        windowX += amountX;
    }
    if ((edge & Align.bottom) != 0) {
        float amountY = y - startY;
        if (height - amountY < minHeight)
            amountY = -(minHeight - height);
        if (clampPosition && windowY + amountY < 0)
            amountY = -windowY;
        height -= amountY;
        windowY += amountY;
    }
    if ((edge & Align.right) != 0) {
        float amountX = x - lastX;
        if (width + amountX < minWidth)
            amountX = minWidth - width;
        if (clampPosition && windowX + width + amountX > stage.getWidth())
            amountX = stage.getWidth() - windowX - width;
        width += amountX;
    }
    if ((edge & Align.top) != 0) {
        float amountY = y - lastY;
        if (height + amountY < minHeight)
            amountY = minHeight - height;
        if (clampPosition && windowY + height + amountY > stage.getHeight())
            amountY = stage.getHeight() - windowY - height;
        height += amountY;
    }
    lastX = x;
    lastY = y;
    setBounds(Math.round(windowX), Math.round(windowY), Math.round(width), Math.round(height));
}
