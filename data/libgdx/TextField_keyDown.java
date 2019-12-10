public boolean keyDown(InputEvent event, int keycode) {
    if (disabled)
        return false;
    lastBlink = 0;
    cursorOn = false;
    Stage stage = getStage();
    if (stage == null || stage.getKeyboardFocus() != TextField.this)
        return false;
    boolean repeat = false;
    boolean ctrl = UIUtils.ctrl();
    boolean jump = ctrl && !passwordMode;
    if (ctrl) {
        if (keycode == Keys.V) {
            paste(clipboard.getContents(), true);
            repeat = true;
        }
        if (keycode == Keys.C || keycode == Keys.INSERT) {
            copy();
            return true;
        }
        if (keycode == Keys.X) {
            cut(true);
            return true;
        }
        if (keycode == Keys.A) {
            selectAll();
            return true;
        }
    }
    if (UIUtils.shift()) {
        if (keycode == Keys.INSERT)
            paste(clipboard.getContents(), true);
        if (keycode == Keys.FORWARD_DEL)
            cut(true);
        selection: {
            int temp = cursor;
            keys: {
                if (keycode == Keys.LEFT) {
                    moveCursor(false, jump);
                    repeat = true;
                    break keys;
                }
                if (keycode == Keys.RIGHT) {
                    moveCursor(true, jump);
                    repeat = true;
                    break keys;
                }
                if (keycode == Keys.HOME) {
                    goHome(jump);
                    break keys;
                }
                if (keycode == Keys.END) {
                    goEnd(jump);
                    break keys;
                }
                break selection;
            }
            if (!hasSelection) {
                selectionStart = temp;
                hasSelection = true;
            }
        }
    } else {
        // Cursor movement or other keys (kills selection).
        if (keycode == Keys.LEFT) {
            moveCursor(false, jump);
            clearSelection();
            repeat = true;
        }
        if (keycode == Keys.RIGHT) {
            moveCursor(true, jump);
            clearSelection();
            repeat = true;
        }
        if (keycode == Keys.HOME) {
            goHome(jump);
            clearSelection();
        }
        if (keycode == Keys.END) {
            goEnd(jump);
            clearSelection();
        }
    }
    cursor = MathUtils.clamp(cursor, 0, text.length());
    if (repeat) {
        scheduleKeyRepeatTask(keycode);
    }
    return true;
}
