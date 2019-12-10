public void touchDragged(InputEvent event, float x, float y, int pointer) {
    if (pointer != pressedPointer)
        return;
    if (!dragging && (Math.abs(touchDownX - x) > tapSquareSize || Math.abs(touchDownY - y) > tapSquareSize)) {
        dragging = true;
        dragStart(event, x, y, pointer);
        deltaX = x;
        deltaY = y;
    }
    if (dragging) {
        deltaX -= x;
        deltaY -= y;
        drag(event, x, y, pointer);
        deltaX = x;
        deltaY = y;
    }
}
