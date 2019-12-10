public void mouseReleased(MouseEvent event) {
    if (dragIndex != -1) {
        dragIndex = -1;
        repaint();
    }
}
