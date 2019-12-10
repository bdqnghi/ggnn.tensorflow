@Override
protected void moveCursor(boolean forward, boolean jump) {
    int count = forward ? 1 : -1;
    int index = (cursorLine * 2) + count;
    if (index >= 0 && index + 1 < linesBreak.size && linesBreak.items[index] == cursor && linesBreak.items[index + 1] == cursor) {
        cursorLine += count;
        if (jump) {
            super.moveCursor(forward, jump);
        }
        showCursor();
    } else {
        super.moveCursor(forward, jump);
    }
    updateCurrentLine();
}
