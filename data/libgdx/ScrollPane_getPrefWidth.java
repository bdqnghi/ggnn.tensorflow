public float getPrefWidth() {
    if (widget instanceof Layout) {
        float width = ((Layout) widget).getPrefWidth();
        if (style.background != null)
            width += style.background.getLeftWidth() + style.background.getRightWidth();
        if (forceScrollY) {
            float scrollbarWidth = 0;
            if (style.vScrollKnob != null)
                scrollbarWidth = style.vScrollKnob.getMinWidth();
            if (style.vScroll != null)
                scrollbarWidth = Math.max(scrollbarWidth, style.vScroll.getMinWidth());
            width += scrollbarWidth;
        }
        return width;
    }
    return 150;
}
