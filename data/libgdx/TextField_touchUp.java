public void touchUp(InputEvent event, float x, float y, int pointer, int button) {
    if (selectionStart == cursor)
        hasSelection = false;
    super.touchUp(event, x, y, pointer, button);
}
