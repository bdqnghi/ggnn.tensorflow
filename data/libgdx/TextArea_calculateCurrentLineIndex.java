/**
 * Calculates the text area line for the given cursor position *
 */
private int calculateCurrentLineIndex(int cursor) {
    int index = 0;
    while (index < linesBreak.size && cursor > linesBreak.items[index]) {
        index++;
    }
    return index;
}
