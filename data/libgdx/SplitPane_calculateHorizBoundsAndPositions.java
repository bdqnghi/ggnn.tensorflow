private void calculateHorizBoundsAndPositions() {
    Drawable handle = style.handle;
    float height = getHeight();
    float availWidth = getWidth() - handle.getMinWidth();
    float leftAreaWidth = (int) (availWidth * splitAmount);
    float rightAreaWidth = availWidth - leftAreaWidth;
    float handleWidth = handle.getMinWidth();
    firstWidgetBounds.set(0, 0, leftAreaWidth, height);
    secondWidgetBounds.set(leftAreaWidth + handleWidth, 0, rightAreaWidth, height);
    handleBounds.set(leftAreaWidth, 0, handleWidth, height);
}
