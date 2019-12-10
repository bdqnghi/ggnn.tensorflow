public void layout() {
    final Drawable bg = style.background;
    final Drawable hScrollKnob = style.hScrollKnob;
    final Drawable vScrollKnob = style.vScrollKnob;
    float bgLeftWidth = 0, bgRightWidth = 0, bgTopHeight = 0, bgBottomHeight = 0;
    if (bg != null) {
        bgLeftWidth = bg.getLeftWidth();
        bgRightWidth = bg.getRightWidth();
        bgTopHeight = bg.getTopHeight();
        bgBottomHeight = bg.getBottomHeight();
    }
    float width = getWidth();
    float height = getHeight();
    float scrollbarHeight = 0;
    if (hScrollKnob != null)
        scrollbarHeight = hScrollKnob.getMinHeight();
    if (style.hScroll != null)
        scrollbarHeight = Math.max(scrollbarHeight, style.hScroll.getMinHeight());
    float scrollbarWidth = 0;
    if (vScrollKnob != null)
        scrollbarWidth = vScrollKnob.getMinWidth();
    if (style.vScroll != null)
        scrollbarWidth = Math.max(scrollbarWidth, style.vScroll.getMinWidth());
    // Get available space size by subtracting background's padded area.
    areaWidth = width - bgLeftWidth - bgRightWidth;
    areaHeight = height - bgTopHeight - bgBottomHeight;
    if (widget == null)
        return;
    // Get widget's desired width.
    float widgetWidth, widgetHeight;
    if (widget instanceof Layout) {
        Layout layout = (Layout) widget;
        widgetWidth = layout.getPrefWidth();
        widgetHeight = layout.getPrefHeight();
    } else {
        widgetWidth = widget.getWidth();
        widgetHeight = widget.getHeight();
    }
    // Determine if horizontal/vertical scrollbars are needed.
    scrollX = forceScrollX || (widgetWidth > areaWidth && !disableX);
    scrollY = forceScrollY || (widgetHeight > areaHeight && !disableY);
    boolean fade = fadeScrollBars;
    if (!fade) {
        // Check again, now taking into account the area that's taken up by any enabled scrollbars.
        if (scrollY) {
            areaWidth -= scrollbarWidth;
            if (!scrollX && widgetWidth > areaWidth && !disableX)
                scrollX = true;
        }
        if (scrollX) {
            areaHeight -= scrollbarHeight;
            if (!scrollY && widgetHeight > areaHeight && !disableY) {
                scrollY = true;
                areaWidth -= scrollbarWidth;
            }
        }
    }
    // The bounds of the scrollable area for the widget.
    widgetAreaBounds.set(bgLeftWidth, bgBottomHeight, areaWidth, areaHeight);
    if (fade) {
        // Make sure widget is drawn under fading scrollbars.
        if (scrollX && scrollY) {
            areaHeight -= scrollbarHeight;
            areaWidth -= scrollbarWidth;
        }
    } else {
        if (scrollbarsOnTop) {
            // Make sure widget is drawn under non-fading scrollbars.
            if (scrollX)
                widgetAreaBounds.height += scrollbarHeight;
            if (scrollY)
                widgetAreaBounds.width += scrollbarWidth;
        } else {
            // Offset widget area y for horizontal scrollbar at bottom.
            if (scrollX && hScrollOnBottom)
                widgetAreaBounds.y += scrollbarHeight;
            // Offset widget area x for vertical scrollbar at left.
            if (scrollY && !vScrollOnRight)
                widgetAreaBounds.x += scrollbarWidth;
        }
    }
    // If the widget is smaller than the available space, make it take up the available space.
    widgetWidth = disableX ? areaWidth : Math.max(areaWidth, widgetWidth);
    widgetHeight = disableY ? areaHeight : Math.max(areaHeight, widgetHeight);
    maxX = widgetWidth - areaWidth;
    maxY = widgetHeight - areaHeight;
    if (fade) {
        // Make sure widget is drawn under fading scrollbars.
        if (scrollX && scrollY) {
            maxY -= scrollbarHeight;
            maxX -= scrollbarWidth;
        }
    }
    scrollX(MathUtils.clamp(amountX, 0, maxX));
    scrollY(MathUtils.clamp(amountY, 0, maxY));
    // Set the bounds and scroll knob sizes if scrollbars are needed.
    if (scrollX) {
        if (hScrollKnob != null) {
            float hScrollHeight = style.hScroll != null ? style.hScroll.getMinHeight() : hScrollKnob.getMinHeight();
            // The corner gap where the two scroll bars intersect might have to flip from right to left.
            float boundsX = vScrollOnRight ? bgLeftWidth : bgLeftWidth + scrollbarWidth;
            // Scrollbar on the top or bottom.
            float boundsY = hScrollOnBottom ? bgBottomHeight : height - bgTopHeight - hScrollHeight;
            hScrollBounds.set(boundsX, boundsY, areaWidth, hScrollHeight);
            if (variableSizeKnobs)
                hKnobBounds.width = Math.max(hScrollKnob.getMinWidth(), (int) (hScrollBounds.width * areaWidth / widgetWidth));
            else
                hKnobBounds.width = hScrollKnob.getMinWidth();
            hKnobBounds.height = hScrollKnob.getMinHeight();
            hKnobBounds.x = hScrollBounds.x + (int) ((hScrollBounds.width - hKnobBounds.width) * getScrollPercentX());
            hKnobBounds.y = hScrollBounds.y;
        } else {
            hScrollBounds.set(0, 0, 0, 0);
            hKnobBounds.set(0, 0, 0, 0);
        }
    }
    if (scrollY) {
        if (vScrollKnob != null) {
            float vScrollWidth = style.vScroll != null ? style.vScroll.getMinWidth() : vScrollKnob.getMinWidth();
            // the small gap where the two scroll bars intersect might have to flip from bottom to top
            float boundsX, boundsY;
            if (hScrollOnBottom) {
                boundsY = height - bgTopHeight - areaHeight;
            } else {
                boundsY = bgBottomHeight;
            }
            // bar on the left or right
            if (vScrollOnRight) {
                boundsX = width - bgRightWidth - vScrollWidth;
            } else {
                boundsX = bgLeftWidth;
            }
            vScrollBounds.set(boundsX, boundsY, vScrollWidth, areaHeight);
            vKnobBounds.width = vScrollKnob.getMinWidth();
            if (variableSizeKnobs)
                vKnobBounds.height = Math.max(vScrollKnob.getMinHeight(), (int) (vScrollBounds.height * areaHeight / widgetHeight));
            else
                vKnobBounds.height = vScrollKnob.getMinHeight();
            if (vScrollOnRight) {
                vKnobBounds.x = width - bgRightWidth - vScrollKnob.getMinWidth();
            } else {
                vKnobBounds.x = bgLeftWidth;
            }
            vKnobBounds.y = vScrollBounds.y + (int) ((vScrollBounds.height - vKnobBounds.height) * (1 - getScrollPercentY()));
        } else {
            vScrollBounds.set(0, 0, 0, 0);
            vKnobBounds.set(0, 0, 0, 0);
        }
    }
    widget.setSize(widgetWidth, widgetHeight);
    if (widget instanceof Layout)
        ((Layout) widget).validate();
}
