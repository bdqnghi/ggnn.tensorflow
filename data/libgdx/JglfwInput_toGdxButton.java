private int toGdxButton(int button) {
    if (button == 0)
        return Buttons.LEFT;
    if (button == 1)
        return Buttons.RIGHT;
    if (button == 2)
        return Buttons.MIDDLE;
    if (button == 3)
        return Buttons.BACK;
    if (button == 4)
        return Buttons.FORWARD;
    return -1;
}
