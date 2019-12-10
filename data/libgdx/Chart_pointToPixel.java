Point pointToPixel(Point point) {
    Point pixel = new Point();
    pixel.x = chartX + (int) (chartWidth * (point.x / (float) maxX));
    pixel.y = chartY + chartHeight - (int) (chartHeight * (point.y / (float) maxY));
    return pixel;
}
