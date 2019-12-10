public boolean keyUp(InputEvent event, int keycode) {
    if (disabled)
        return false;
    keyRepeatTask.cancel();
    return true;
}
