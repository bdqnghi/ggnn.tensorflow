@Override
public boolean keyDown(InputEvent event, int keycode) {
    super.keyDown(event, keycode);
    Stage stage = getStage();
    if (stage != null && stage.getKeyboardFocus() == TextArea.this) {
        boolean repeat = false;
        boolean shift = Gdx.input.isKeyPressed(Input.Keys.SHIFT_LEFT) || Gdx.input.isKeyPressed(Input.Keys.SHIFT_RIGHT);
        if (keycode == Input.Keys.DOWN) {
            if (shift) {
                if (!hasSelection) {
                    selectionStart = cursor;
                    hasSelection = true;
                }
            } else {
                clearSelection();
            }
            moveCursorLine(cursorLine + 1);
            repeat = true;
        } else if (keycode == Input.Keys.UP) {
            if (shift) {
                if (!hasSelection) {
                    selectionStart = cursor;
                    hasSelection = true;
                }
            } else {
                clearSelection();
            }
            moveCursorLine(cursorLine - 1);
            repeat = true;
        } else {
            moveOffset = -1;
        }
        if (repeat) {
            scheduleKeyRepeatTask(keycode);
        }
        showCursor();
        return true;
    }
    return false;
}
