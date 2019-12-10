public void mouseDragged(MouseEvent e) {
    Point p = getLocation();
    setLocation(p.x + e.getX() - point.x, p.y + e.getY() - point.y);
}
