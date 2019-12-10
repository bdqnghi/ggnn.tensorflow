private int toLwjglButton(int button) {
    switch(button) {
        case Buttons.LEFT:
            return 0;
        case Buttons.RIGHT:
            return 1;
        case Buttons.MIDDLE:
            return 2;
        case Buttons.BACK:
            return 3;
        case Buttons.FORWARD:
            return 4;
    }
    return 0;
}
