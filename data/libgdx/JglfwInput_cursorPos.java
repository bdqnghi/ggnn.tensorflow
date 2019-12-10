public void cursorPos(long window, int x, int y) {
    mouseX = x;
    mouseY = y;
    if (mousePressed > 0)
        processor.touchDragged(x, y, 0);
    else
        processor.mouseMoved(x, y);
}
