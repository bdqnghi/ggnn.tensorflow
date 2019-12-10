public float getScrollBarWidth() {
    if (!scrollY)
        return 0;
    float width = 0;
    if (style.vScrollKnob != null)
        width = style.vScrollKnob.getMinWidth();
    if (style.vScroll != null)
        width = Math.max(width, style.vScroll.getMinWidth());
    return width;
}
