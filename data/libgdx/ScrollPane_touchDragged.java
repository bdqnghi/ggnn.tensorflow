public void touchDragged(InputEvent event, float x, float y, int pointer) {
    if (pointer != draggingPointer)
        return;
    if (touchScrollH) {
        float delta = x - lastPoint.x;
        float scrollH = handlePosition + delta;
        handlePosition = scrollH;
        scrollH = Math.max(hScrollBounds.x, scrollH);
        scrollH = Math.min(hScrollBounds.x + hScrollBounds.width - hKnobBounds.width, scrollH);
        float total = hScrollBounds.width - hKnobBounds.width;
        if (total != 0)
            setScrollPercentX((scrollH - hScrollBounds.x) / total);
        lastPoint.set(x, y);
    } else if (touchScrollV) {
        float delta = y - lastPoint.y;
        float scrollV = handlePosition + delta;
        handlePosition = scrollV;
        scrollV = Math.max(vScrollBounds.y, scrollV);
        scrollV = Math.min(vScrollBounds.y + vScrollBounds.height - vKnobBounds.height, scrollV);
        float total = vScrollBounds.height - vKnobBounds.height;
        if (total != 0)
            setScrollPercentY(1 - ((scrollV - vScrollBounds.y) / total));
        lastPoint.set(x, y);
    }
}
