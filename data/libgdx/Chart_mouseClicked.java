public void mouseClicked(MouseEvent event) {
    if (event.getClickCount() == 2) {
        if (overIndex <= 0 || overIndex >= points.size())
            return;
        points.remove(overIndex);
        pointsChanged();
        repaint();
        return;
    }
    if (movingIndex != -1)
        return;
    if (overIndex != -1)
        return;
    int mouseX = event.getX();
    int mouseY = event.getY();
    if (mouseX < chartX || mouseX > chartX + chartWidth)
        return;
    if (mouseY < chartY || mouseY > chartY + chartHeight)
        return;
    Point newPoint = pixelToPoint(mouseX, mouseY);
    int i = 0;
    Point lastPoint = null;
    for (Point point : points) {
        if (point.x > newPoint.x) {
            if (Math.abs(point.x - newPoint.x) < 0.001f)
                return;
            if (lastPoint != null && Math.abs(lastPoint.x - newPoint.x) < 0.001f)
                return;
            points.add(i, newPoint);
            overIndex = i;
            pointsChanged();
            repaint();
            return;
        }
        lastPoint = point;
        i++;
    }
    overIndex = points.size();
    points.add(newPoint);
    pointsChanged();
    repaint();
}
