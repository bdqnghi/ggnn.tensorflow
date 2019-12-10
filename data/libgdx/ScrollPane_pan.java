public void pan(InputEvent event, float x, float y, float deltaX, float deltaY) {
    resetFade();
    amountX -= deltaX;
    amountY += deltaY;
    clamp();
    if (cancelTouchFocus)
        cancelTouchFocus();
}
