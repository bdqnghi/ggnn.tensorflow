@Override
public void mouseExited(MouseEvent e) {
    checkCatched(e);
    lwjglAwtCanvas.graphics.requestRendering();
}
