private void buttonReleased(int buttonIndex) {
    buttons[buttonIndex] = false;
    if (listener != null)
        listener.buttonReleased(this, buttonIndex);
}
