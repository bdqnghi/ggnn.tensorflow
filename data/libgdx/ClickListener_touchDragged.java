public void touchDragged(InputEvent event, float x, float y, int pointer) {
    if (pointer != pressedPointer || cancelled)
        return;
    pressed = isOver(event.getListenerActor(), x, y);
    if (pressed && pointer == 0 && button != -1 && !Gdx.input.isButtonPressed(button))
        pressed = false;
    if (!pressed) {
        // Once outside the tap square, don't use the tap square anymore.
        invalidateTapSquare();
    }
}
