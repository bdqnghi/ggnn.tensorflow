@Override
protected void goHome(boolean jump) {
    if (jump) {
        cursor = 0;
    } else if (cursorLine * 2 < linesBreak.size) {
        cursor = linesBreak.get(cursorLine * 2);
    }
}
