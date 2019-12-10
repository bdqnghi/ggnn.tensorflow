protected void paintComponent(Graphics graphics) {
    // setOpaque(true);
    // setBackground(Color.red);
    super.paintComponent(graphics);
    Graphics2D g = (Graphics2D) graphics;
    FontMetrics metrics = g.getFontMetrics();
    if (numberHeight == 0) {
        numberHeight = getFont().layoutGlyphVector(g.getFontRenderContext(), new char[] { '0' }, 0, 1, Font.LAYOUT_LEFT_TO_RIGHT).getGlyphPixelBounds(0, g.getFontRenderContext(), 0, 0).height;
    }
    int width = getWidth();
    if (!isExpanded)
        width = Math.min(150, width);
    width = Math.max(100, width);
    int height = getHeight();
    int maxAxisLabelWidth;
    int yAxisWidth;
    if (isExpanded) {
        maxAxisLabelWidth = metrics.stringWidth("100%");
        yAxisWidth = maxAxisLabelWidth + 8;
        chartX = yAxisWidth;
        chartY = numberHeight / 2 + 1;
        chartWidth = width - yAxisWidth - 2;
        chartHeight = height - chartY - numberHeight - 8;
    } else {
        maxAxisLabelWidth = 0;
        yAxisWidth = 2;
        chartX = yAxisWidth;
        chartY = 2;
        chartWidth = width - yAxisWidth - 2;
        chartHeight = height - chartY - 3;
    }
    g.setColor(Color.white);
    g.fillRect(chartX, chartY, chartWidth, chartHeight);
    g.setColor(Color.black);
    g.drawRect(chartX, chartY, chartWidth, chartHeight);
    maxX = 1;
    {
        int y = height;
        if (isExpanded)
            y -= numberHeight;
        else
            y += 5;
        int xSplit = (int) Math.min(10, chartWidth / (maxAxisLabelWidth * 1.5f));
        for (int i = 0; i <= xSplit; i++) {
            float percent = i / (float) xSplit;
            String label = axisLabel(maxX * percent);
            int labelWidth = metrics.stringWidth(label);
            int x = (int) (yAxisWidth + chartWidth * percent);
            if (i != 0 && i != xSplit) {
                g.setColor(Color.lightGray);
                g.drawLine(x, chartY + 1, x, chartY + chartHeight);
                g.setColor(Color.black);
            }
            g.drawLine(x, y - 4, x, y - 8);
            if (isExpanded) {
                x -= labelWidth / 2;
                if (i == xSplit)
                    x = Math.min(x, width - labelWidth);
                g.drawString(label, x, y + numberHeight);
            }
        }
    }
    maxY = 1;
    {
        int ySplit = isExpanded ? Math.min(10, chartHeight / (numberHeight * 3)) : 4;
        for (int i = 0; i <= ySplit; i++) {
            float percent = i / (float) ySplit;
            String label = axisLabel(maxY * percent);
            int labelWidth = metrics.stringWidth(label);
            int y = (int) (chartY + chartHeight - chartHeight * percent);
            if (isExpanded)
                g.drawString(label, yAxisWidth - 6 - labelWidth, y + numberHeight / 2);
            if (i != 0 && i != ySplit) {
                g.setColor(Color.lightGray);
                g.drawLine(chartX, y, chartX + chartWidth - 1, y);
                g.setColor(Color.black);
            }
            g.drawLine(yAxisWidth - 4, y, yAxisWidth, y);
        }
    }
    {
        int titleWidth = metrics.stringWidth(title);
        int x = yAxisWidth + chartWidth / 2 - titleWidth / 2;
        int y = chartY + chartHeight / 2 - numberHeight / 2;
        g.setColor(Color.white);
        g.fillRect(x - 2, y - 2, titleWidth + 4, numberHeight + 4);
        g.setColor(Color.lightGray);
        g.drawString(title, x, y + numberHeight);
    }
    g.setColor(Color.blue);
    g.setStroke(new BasicStroke(isExpanded ? 3 : 2));
    int lastX = -1, lastY = -1;
    for (Point point : points) {
        Point pixel = pointToPixel(point);
        if (lastX != -1)
            g.drawLine(lastX, lastY, (int) pixel.x, (int) pixel.y);
        lastX = (int) pixel.x;
        lastY = (int) pixel.y;
    }
    g.drawLine(lastX, lastY, chartX + chartWidth - 1, lastY);
    for (int i = 0, n = points.size(); i < n; i++) {
        Point point = points.get(i);
        Point pixel = pointToPixel(point);
        if (overIndex == i)
            g.setColor(Color.red);
        else
            g.setColor(Color.black);
        String label = valueLabel(point.y);
        int labelWidth = metrics.stringWidth(label);
        int pointSize = isExpanded ? POINT_SIZE_EXPANDED : POINT_SIZE;
        int x = (int) pixel.x - pointSize / 2;
        int y = (int) pixel.y - pointSize / 2;
        g.fillOval(x, y, pointSize, pointSize);
        if (isExpanded) {
            g.setColor(Color.black);
            x = Math.max(chartX + 2, Math.min(chartX + chartWidth - labelWidth, x));
            y -= 3;
            if (y < chartY + numberHeight + 3)
                y += 27;
            else if (n > 1) {
                Point comparePoint = i == n - 1 ? points.get(i - 1) : points.get(i + 1);
                if (y < chartY + chartHeight - 27 && comparePoint.y > point.y)
                    y += 27;
            }
            g.drawString(label, x, y);
        }
    }
}
