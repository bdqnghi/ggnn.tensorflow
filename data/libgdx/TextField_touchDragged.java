public void touchDragged(InputEvent event, float x, float y, int pointer) {
    super.touchDragged(event, x, y, pointer);
    setCursorPosition(x, y);
}
