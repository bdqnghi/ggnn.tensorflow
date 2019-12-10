private void showCursor(boolean visible) {
    if (!visible) {
        Toolkit t = Toolkit.getDefaultToolkit();
        Image i = new BufferedImage(1, 1, BufferedImage.TYPE_INT_ARGB);
        Cursor noCursor = t.createCustomCursor(i, new Point(0, 0), "none");
        JFrame frame = findJFrame(canvas);
        frame.setCursor(noCursor);
    } else {
        JFrame frame = findJFrame(canvas);
        frame.setCursor(Cursor.getDefaultCursor());
    }
}
