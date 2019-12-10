/**
 * Sets the selected text.
 */
public void setSelection(int selectionStart, int selectionEnd) {
    if (selectionStart < 0)
        throw new IllegalArgumentException("selectionStart must be >= 0");
    if (selectionEnd < 0)
        throw new IllegalArgumentException("selectionEnd must be >= 0");
    selectionStart = Math.min(text.length(), selectionStart);
    selectionEnd = Math.min(text.length(), selectionEnd);
    if (selectionEnd == selectionStart) {
        clearSelection();
        return;
    }
    if (selectionEnd < selectionStart) {
        int temp = selectionEnd;
        selectionEnd = selectionStart;
        selectionStart = temp;
    }
    hasSelection = true;
    this.selectionStart = selectionStart;
    cursor = selectionEnd;
}
