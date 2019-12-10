public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    if (pressedPointer != -1)
        return false;
    if (pointer == 0 && this.button != -1 && button != this.button)
        return false;
    pressedPointer = pointer;
    touchDownX = x;
    touchDownY = y;
    stageTouchDownX = event.getStageX();
    stageTouchDownY = event.getStageY();
    return true;
}
