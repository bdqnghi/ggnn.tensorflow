protected void paintComponent(Graphics graphics) {
    super.paintComponent(graphics);
    Graphics2D g = (Graphics2D) graphics;
    int width = getWidth();
    int height = getHeight();
    g.setColor(bgColor);
    g.fillRect(border, border, width - border * 2, height - border * 2);
    int maxKnobX = width - border - KNOB_WIDTH;
    int knobX = (int) ((width - border * 2 - KNOB_WIDTH) * (value - sliderMin) / (sliderMax - sliderMin)) + border;
    g.setColor(knobColor);
    g.fillRect(Math.max(border, Math.min(maxKnobX, knobX)), 0, KNOB_WIDTH, height);
    float displayValue = (int) (value * 10) / 10f;
    String label = displayValue == (int) displayValue ? String.valueOf((int) displayValue) : String.valueOf(displayValue);
    FontMetrics metrics = g.getFontMetrics();
    int labelWidth = metrics.stringWidth(label);
    g.setColor(Color.white);
    g.drawString(label, width / 2 - labelWidth / 2, height / 2 + metrics.getAscent() / 2);
}
