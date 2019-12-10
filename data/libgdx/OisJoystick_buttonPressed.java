private void buttonPressed(int buttonIndex) {
    buttons[buttonIndex] = true;
    if (listener != null)
        listener.buttonPressed(this, buttonIndex);
}
