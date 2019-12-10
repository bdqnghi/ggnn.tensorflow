@Override
public void setCursorPosition(int x, int y) {
    if (robot != null) {
        robot.mouseMove(canvas.getLocationOnScreen().x + x, canvas.getLocationOnScreen().y + y);
    }
}
