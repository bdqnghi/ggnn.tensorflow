public void mouseClicked(MouseEvent event) {
    slider.setValue((int) (event.getX() / (float) getWidth() * 1000));
}
