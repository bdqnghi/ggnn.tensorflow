public void setListeners(Canvas canvas) {
    if (this.canvas != null) {
        canvas.removeMouseListener(this);
        canvas.removeMouseMotionListener(this);
        canvas.removeMouseWheelListener(this);
        canvas.removeKeyListener(this);
    }
    canvas.addMouseListener(this);
    canvas.addMouseMotionListener(this);
    canvas.addMouseWheelListener(this);
    canvas.addKeyListener(this);
    canvas.setFocusTraversalKeysEnabled(false);
    this.canvas = canvas;
}
