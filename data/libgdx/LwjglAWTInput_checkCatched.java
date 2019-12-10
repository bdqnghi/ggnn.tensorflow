private void checkCatched(MouseEvent e) {
    if (catched && robot != null && canvas.isShowing()) {
        int x = Math.max(0, Math.min(e.getX(), canvas.getWidth()) - 1) + canvas.getLocationOnScreen().x;
        int y = Math.max(0, Math.min(e.getY(), canvas.getHeight()) - 1) + canvas.getLocationOnScreen().y;
        if (e.getX() < 0 || e.getX() >= canvas.getWidth() || e.getY() < 0 || e.getY() >= canvas.getHeight()) {
            robot.mouseMove(x, y);
        }
    }
}
