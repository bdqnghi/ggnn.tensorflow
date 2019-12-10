public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    if (draggingPointer != -1)
        return false;
    if (pointer == 0 && button != 0)
        return false;
    getStage().setScrollFocus(ScrollPane.this);
    if (!flickScroll)
        resetFade();
    if (fadeAlpha == 0)
        return false;
    if (scrollX && hScrollBounds.contains(x, y)) {
        event.stop();
        resetFade();
        if (hKnobBounds.contains(x, y)) {
            lastPoint.set(x, y);
            handlePosition = hKnobBounds.x;
            touchScrollH = true;
            draggingPointer = pointer;
            return true;
        }
        setScrollX(amountX + areaWidth * (x < hKnobBounds.x ? -1 : 1));
        return true;
    }
    if (scrollY && vScrollBounds.contains(x, y)) {
        event.stop();
        resetFade();
        if (vKnobBounds.contains(x, y)) {
            lastPoint.set(x, y);
            handlePosition = vKnobBounds.y;
            touchScrollV = true;
            draggingPointer = pointer;
            return true;
        }
        setScrollY(amountY + areaHeight * (y < vKnobBounds.y ? 1 : -1));
        return true;
    }
    return false;
}
