public void mousePressed(MouseEvent event) {
    float width = getWidth() - KNOB_WIDTH - border * 2;
    float mouseX = event.getX() - KNOB_WIDTH / 2 - border;
    setValue(sliderMin + (sliderMax - sliderMin) * Math.max(0, Math.min(width, mouseX)) / width);
}
