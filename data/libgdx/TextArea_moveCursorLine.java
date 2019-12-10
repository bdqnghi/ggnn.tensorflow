/**
 * Moves the cursor to the given number line *
 */
public void moveCursorLine(int line) {
    if (line < 0) {
        cursorLine = 0;
        cursor = 0;
        moveOffset = -1;
    } else if (line >= getLines()) {
        int newLine = getLines() - 1;
        cursor = text.length();
        if (line > getLines() || newLine == cursorLine) {
            moveOffset = -1;
        }
        cursorLine = newLine;
    } else if (line != cursorLine) {
        if (moveOffset < 0) {
            moveOffset = linesBreak.size <= cursorLine * 2 ? 0 : glyphPositions.get(cursor) - glyphPositions.get(linesBreak.get(cursorLine * 2));
        }
        cursorLine = line;
        cursor = cursorLine * 2 >= linesBreak.size ? text.length() : linesBreak.get(cursorLine * 2);
        while (cursor < text.length() && cursor <= linesBreak.get(cursorLine * 2 + 1) - 1 && glyphPositions.get(cursor) - glyphPositions.get(linesBreak.get(cursorLine * 2)) < moveOffset) {
            cursor++;
        }
        showCursor();
    }
}
