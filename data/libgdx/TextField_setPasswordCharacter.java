/**
 * Sets the password character for the text field. The character must be present in the {@link BitmapFont}. Default is 149
 * (bullet).
 */
public void setPasswordCharacter(char passwordCharacter) {
    this.passwordCharacter = passwordCharacter;
    if (passwordMode)
        updateDisplayText();
}
