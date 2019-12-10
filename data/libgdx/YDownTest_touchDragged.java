public void touchDragged(InputEvent event, float x, float y, int pointer) {
    // we only care for the first finger to make things easier
    if (pointer != 0)
        return;
    // adjust the actor's position by (current mouse position - last mouse position)
    // in the actor's coordinate system.
    moveBy(x - lastX, y - lastY);
    // save the current mouse position as the basis for the next drag event.
    // we adjust by the same delta so next time drag is called, lastX/lastY
    // are in the actor's local coordinate system automatically.
    lastX = x - (x - lastX);
    lastY = y - (y - lastY);
}
