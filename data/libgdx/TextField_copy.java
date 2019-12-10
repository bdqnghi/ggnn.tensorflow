/**
 * Copies the contents of this TextField to the {@link Clipboard} implementation set on this TextField.
 */
public void copy() {
    if (hasSelection && !passwordMode) {
        clipboard.setContents(text.substring(Math.min(cursor, selectionStart), Math.max(cursor, selectionStart)));
    }
}
