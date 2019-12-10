/**
 * Scroll the text area to show the line of the cursor *
 */
void showCursor() {
    updateCurrentLine();
    if (cursorLine != firstLineShowing) {
        int step = cursorLine >= firstLineShowing ? 1 : -1;
        while (firstLineShowing > cursorLine || firstLineShowing + linesShowing - 1 < cursorLine) {
            firstLineShowing += step;
        }
    }
}
