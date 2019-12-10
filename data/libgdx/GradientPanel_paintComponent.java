protected void paintComponent(Graphics graphics) {
    Graphics2D g = (Graphics2D) graphics;
    int width = getWidth() - 1;
    int height = getHeight() - 1;
    for (int i = 0, n = paletteColors.length - 1; i < n; i++) {
        Color color1 = paletteColors[i];
        Color color2 = paletteColors[i + 1];
        float point1 = i / (float) n * width;
        float point2 = (i + 1) / (float) n * width;
        g.setPaint(new GradientPaint(point1, 0, color1, point2, 0, color2, false));
        g.fillRect((int) point1, 0, (int) Math.ceil(point2 - point1), height);
    }
    g.setPaint(null);
    g.setColor(Color.black);
    g.drawRect(0, 0, width, height);
}
