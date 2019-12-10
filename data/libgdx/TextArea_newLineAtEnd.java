/**
 * Returns if there's a new line at then end of the text *
 */
public boolean newLineAtEnd() {
    return text.length() != 0 && (text.charAt(text.length() - 1) == ENTER_ANDROID || text.charAt(text.length() - 1) == ENTER_DESKTOP);
}
