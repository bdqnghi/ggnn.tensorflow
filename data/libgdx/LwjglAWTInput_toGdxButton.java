private int toGdxButton(int swingButton) {
    if (swingButton == MouseEvent.BUTTON1)
        return Buttons.LEFT;
    if (swingButton == MouseEvent.BUTTON2)
        return Buttons.MIDDLE;
    if (swingButton == MouseEvent.BUTTON3)
        return Buttons.RIGHT;
    return Buttons.LEFT;
}
