@Override
protected boolean continueCursor(int index, int offset) {
    int pos = calculateCurrentLineIndex(index + offset);
    return super.continueCursor(index, offset) && (pos < 0 || pos >= linesBreak.size - 2 || (linesBreak.items[pos + 1] != index) || (linesBreak.items[pos + 1] == linesBreak.items[pos + 2]));
}
