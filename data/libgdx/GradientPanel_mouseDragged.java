public void mouseDragged(MouseEvent event) {
    if (dragIndex == -1 || dragIndex == 0 || dragIndex == percentages.size() - 1)
        return;
    float percent = (event.getX() - gradientX) / (float) gradientWidth;
    percent = Math.max(percent, percentages.get(dragIndex - 1) + 0.01f);
    percent = Math.min(percent, percentages.get(dragIndex + 1) - 0.01f);
    percentages.set(dragIndex, percent);
    repaint();
}
