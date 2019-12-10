public void mouseDragged(MouseEvent event) {
    if (movingIndex == -1 || movingIndex >= points.size())
        return;
    if (moveAll) {
        int newY = event.getY();
        float deltaY = (moveAllPrevY - newY) / (float) chartHeight * maxY;
        for (Point point : points) {
            point.y = Math.min(maxY, Math.max(0, point.y + (moveAllProportionally ? deltaY * point.y : deltaY)));
        }
        moveAllPrevY = newY;
    } else {
        float nextX = movingIndex == points.size() - 1 ? maxX : points.get(movingIndex + 1).x - 0.001f;
        if (movingIndex == 0)
            nextX = 0;
        float prevX = movingIndex == 0 ? 0 : points.get(movingIndex - 1).x + 0.001f;
        Point point = points.get(movingIndex);
        point.x = Math.min(nextX, Math.max(prevX, (event.getX() - chartX) / (float) chartWidth * maxX));
        point.y = Math.min(maxY, Math.max(0, chartHeight - (event.getY() - chartY)) / (float) chartHeight * maxY);
    }
    pointsChanged();
    repaint();
}
