private String getButtonString(int button) {
    if (button == Buttons.LEFT)
        return "left";
    if (button == Buttons.RIGHT)
        return "right";
    if (button == Buttons.MIDDLE)
        return "middle";
    if (button == Buttons.BACK)
        return "back";
    if (button == Buttons.FORWARD)
        return "forward";
    return "unknown";
}
