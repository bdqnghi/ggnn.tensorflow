public int getControlCount(ControlType type) {
    switch(type) {
        case button:
            return joystick.getButtonCount();
        case axis:
            return joystick.getAxisCount();
        case slider:
            return joystick.getSliderCount();
        case pov:
            return joystick.getPovCount();
    }
    return 0;
}
