/**
 * If true, the text in this text field will be shown as bullet characters.
 * @see #setPasswordCharacter(char)
 */
public void setPasswordMode(boolean passwordMode) {
    this.passwordMode = passwordMode;
    updateDisplayText();
}
