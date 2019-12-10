private void calculateVertBoundsAndPositions() {
    Drawable handle = style.handle;
    float width = getWidth();
    float height = getHeight();
    float availHeight = height - handle.getMinHeight();
    float topAreaHeight = (int) (availHeight * splitAmount);
    float bottomAreaHeight = availHeight - topAreaHeight;
    float handleHeight = handle.getMinHeight();
    firstWidgetBounds.set(0, height - topAreaHeight, width, topAreaHeight);
    secondWidgetBounds.set(0, 0, width, bottomAreaHeight);
    handleBounds.set(0, bottomAreaHeight, width, handleHeight);
}
