Point pixelToPoint(float x, float y) {
    Point point = new Point();
    point.x = Math.min(maxX, Math.max(0, x - chartX) / (float) chartWidth * maxX);
    point.y = Math.min(maxY, Math.max(0, chartHeight - (y - chartY)) / (float) chartHeight * maxY);
    return point;
}
