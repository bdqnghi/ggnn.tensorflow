@Override
protected void goEnd(boolean jump) {
    if (jump || cursorLine >= getLines()) {
        cursor = text.length();
    } else if (cursorLine * 2 + 1 < linesBreak.size) {
        cursor = linesBreak.get(cursorLine * 2 + 1);
    }
}
