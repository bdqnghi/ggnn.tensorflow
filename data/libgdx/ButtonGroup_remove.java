public void remove(T... buttons) {
    if (buttons == null)
        throw new IllegalArgumentException("buttons cannot be null.");
    for (int i = 0, n = buttons.length; i < n; i++) remove(buttons[i]);
}
