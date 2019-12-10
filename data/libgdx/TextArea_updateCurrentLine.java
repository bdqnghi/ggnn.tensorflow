/**
 * Updates the current line, checking the cursor position in the text *
 */
void updateCurrentLine() {
    int index = calculateCurrentLineIndex(cursor);
    int line = index / 2;
    // wider than the box
    if (index % 2 == 0 || index + 1 >= linesBreak.size || cursor != linesBreak.items[index] || linesBreak.items[index + 1] != linesBreak.items[index]) {
        if (line < linesBreak.size / 2 || text.length() == 0 || text.charAt(text.length() - 1) == ENTER_ANDROID || text.charAt(text.length() - 1) == ENTER_DESKTOP) {
            cursorLine = line;
        }
    }
}
