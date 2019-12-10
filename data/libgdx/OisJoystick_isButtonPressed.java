public boolean isButtonPressed(int buttonIndex) {
    if (buttonIndex < 0 || buttonIndex >= buttons.length)
        return false;
    return buttons[buttonIndex];
}
