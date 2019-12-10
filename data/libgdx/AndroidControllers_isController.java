private boolean isController(InputDevice device) {
    return (device.getSources() & InputDevice.SOURCE_JOYSTICK) != 0;
}
