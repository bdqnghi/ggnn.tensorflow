public float getScrollBarHeight() {
    if (!scrollX)
        return 0;
    float height = 0;
    if (style.hScrollKnob != null)
        height = style.hScrollKnob.getMinHeight();
    if (style.hScroll != null)
        height = Math.max(height, style.hScroll.getMinHeight());
    return height;
}
