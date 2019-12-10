public void mousePressed(MouseEvent event) {
    dragIndex = -1;
    int mouseX = event.getX();
    int mouseY = event.getY();
    int y = gradientY + gradientHeight;
    for (int i = 0, n = colors.size(); i < n; i++) {
        int x = gradientX + (int) (percentages.get(i) * gradientWidth) - handleWidth / 2;
        if (mouseX >= x && mouseX <= x + handleWidth && mouseY >= gradientY && mouseY <= y + handleHeight) {
            dragIndex = selectedIndex = i;
            handleSelected(colors.get(selectedIndex));
            repaint();
            break;
        }
    }
}
