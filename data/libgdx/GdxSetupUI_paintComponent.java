@Override
protected void paintComponent(Graphics g) {
    if (getModel().isPressed()) {
        g.setColor(pressedColor);
    } else if (getModel().isRollover()) {
        g.setColor(overColor);
    } else {
        g.setColor(getBackground());
    }
    g.fillRect(0, 0, getWidth(), getHeight());
    super.paintComponent(g);
}
