public void mouseButton(long window, int button, boolean pressed) {
    int gdxButton = toGdxButton(button);
    // Ignore unknown button.
    if (button != -1 && gdxButton == -1)
        return;
    if (pressed) {
        mousePressed++;
        processor.touchDown(mouseX, mouseY, 0, gdxButton);
    } else {
        mousePressed = Math.max(0, mousePressed - 1);
        processor.touchUp(mouseX, mouseY, 0, gdxButton);
    }
}
