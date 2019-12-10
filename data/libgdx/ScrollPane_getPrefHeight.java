public float getPrefHeight() {
    if (widget instanceof Layout) {
        float height = ((Layout) widget).getPrefHeight();
        if (style.background != null)
            height += style.background.getTopHeight() + style.background.getBottomHeight();
        if (forceScrollX) {
            float scrollbarHeight = 0;
            if (style.hScrollKnob != null)
                scrollbarHeight = style.hScrollKnob.getMinHeight();
            if (style.hScroll != null)
                scrollbarHeight = Math.max(scrollbarHeight, style.hScroll.getMinHeight());
            height += scrollbarHeight;
        }
        return height;
    }
    return 150;
}
