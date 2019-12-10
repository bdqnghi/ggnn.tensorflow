public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
    if (pressed)
        return false;
    if (pointer == 0 && this.button != -1 && button != this.button)
        return false;
    pressed = true;
    pressedPointer = pointer;
    pressedButton = button;
    touchDownX = x;
    touchDownY = y;
    visualPressedTime = TimeUtils.millis() + (long) (visualPressedDuration * 1000);
    return true;
}
