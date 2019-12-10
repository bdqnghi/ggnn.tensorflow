@Override
protected void initialize() {
    super.initialize();
    writeEnters = true;
    linesBreak = new IntArray();
    cursorLine = 0;
    firstLineShowing = 0;
    moveOffset = -1;
    linesShowing = 0;
}
