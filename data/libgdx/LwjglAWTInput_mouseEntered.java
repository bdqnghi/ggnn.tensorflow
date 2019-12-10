@Override
public void mouseEntered(MouseEvent e) {
    touchX = e.getX();
    touchY = e.getY();
    checkCatched(e);
    lwjglAwtCanvas.graphics.requestRendering();
}
