int delete(boolean fireChangeEvent) {
    int from = selectionStart;
    int to = cursor;
    int minIndex = Math.min(from, to);
    int maxIndex = Math.max(from, to);
    String newText = (minIndex > 0 ? text.substring(0, minIndex) : "") + (maxIndex < text.length() ? text.substring(maxIndex, text.length()) : "");
    if (fireChangeEvent)
        changeText(text, newText);
    else
        text = newText;
    clearSelection();
    return minIndex;
}
