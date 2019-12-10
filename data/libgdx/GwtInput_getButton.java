private int getButton(int button) {
    if (button == NativeEvent.BUTTON_LEFT)
        return Buttons.LEFT;
    if (button == NativeEvent.BUTTON_RIGHT)
        return Buttons.RIGHT;
    if (button == NativeEvent.BUTTON_MIDDLE)
        return Buttons.MIDDLE;
    return Buttons.LEFT;
}
