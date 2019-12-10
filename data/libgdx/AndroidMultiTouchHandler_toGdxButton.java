private int toGdxButton(int button) {
    if (button == 0 || button == 1)
        return Buttons.LEFT;
    if (button == 2)
        return Buttons.RIGHT;
    if (button == 4)
        return Buttons.MIDDLE;
    if (button == 8)
        return Buttons.BACK;
    if (button == 16)
        return Buttons.FORWARD;
    return -1;
}
