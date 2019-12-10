public void mouseMoved(MouseEvent event) {
    int mouseX = event.getX();
    int mouseY = event.getY();
    int oldIndex = overIndex;
    overIndex = -1;
    int pointSize = isExpanded ? POINT_SIZE_EXPANDED : POINT_SIZE;
    int i = 0;
    for (Point point : points) {
        int x = chartX + (int) (chartWidth * (point.x / (float) maxX));
        int y = chartY + chartHeight - (int) (chartHeight * (point.y / (float) maxY));
        if (Math.abs(x - mouseX) <= pointSize && Math.abs(y - mouseY) <= pointSize) {
            overIndex = i;
            break;
        }
        i++;
    }
    if (overIndex != oldIndex)
        repaint();
}
