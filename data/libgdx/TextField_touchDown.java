public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    if (!super.touchDown(event, x, y, pointer, button))
        return false;
    if (pointer == 0 && button != 0)
        return false;
    if (disabled)
        return true;
    setCursorPosition(x, y);
    selectionStart = cursor;
    Stage stage = getStage();
    if (stage != null)
        stage.setKeyboardFocus(TextField.this);
    keyboard.show(true);
    hasSelection = true;
    return true;
}
