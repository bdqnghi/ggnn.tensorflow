/**
 * Sets the first {@link TextButton} with the specified text to checked.
 */
public void setChecked(String text) {
    if (text == null)
        throw new IllegalArgumentException("text cannot be null.");
    for (int i = 0, n = buttons.size; i < n; i++) {
        T button = buttons.get(i);
        if (button instanceof TextButton && text.contentEquals(((TextButton) button).getText())) {
            button.setChecked(true);
            return;
        }
    }
}
