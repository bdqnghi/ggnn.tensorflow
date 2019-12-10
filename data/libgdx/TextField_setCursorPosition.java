protected void setCursorPosition(float x, float y) {
    lastBlink = 0;
    cursorOn = false;
    cursor = letterUnderCursor(x);
}
