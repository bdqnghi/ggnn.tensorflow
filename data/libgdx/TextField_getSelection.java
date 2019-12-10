public String getSelection() {
    return hasSelection ? text.substring(Math.min(selectionStart, cursor), Math.max(selectionStart, cursor)) : "";
}
