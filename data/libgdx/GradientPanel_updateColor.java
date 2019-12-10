void updateColor() {
    Color color = new Color(Color.HSBtoRGB(hueSlider.getPercentage(), 1 - saturationSlider.getPercentage(), 1));
    lightnessSlider.setColors(new Color[] { color, Color.black });
    color = new Color(Color.HSBtoRGB(hueSlider.getPercentage(), 1 - saturationSlider.getPercentage(), 1 - lightnessSlider.getPercentage()));
    colorPanel.setBackground(color);
    gradientEditor.setColor(color);
    float[] colors = new float[gradientEditor.colors.size() * 3];
    int i = 0;
    for (Color c : gradientEditor.colors) {
        colors[i++] = c.getRed() / 255f;
        colors[i++] = c.getGreen() / 255f;
        colors[i++] = c.getBlue() / 255f;
    }
    float[] percentages = new float[gradientEditor.percentages.size()];
    i = 0;
    for (Float percent : gradientEditor.percentages) percentages[i++] = percent;
    value.setColors(colors);
    value.setTimeline(percentages);
}
