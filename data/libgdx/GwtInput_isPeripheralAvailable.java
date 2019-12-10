@Override
public boolean isPeripheralAvailable(Peripheral peripheral) {
    if (peripheral == Peripheral.Accelerometer)
        return false;
    if (peripheral == Peripheral.Compass)
        return false;
    if (peripheral == Peripheral.HardwareKeyboard)
        return true;
    if (peripheral == Peripheral.MultitouchScreen)
        return isTouchScreen();
    if (peripheral == Peripheral.OnscreenKeyboard)
        return false;
    if (peripheral == Peripheral.Vibrator)
        return false;
    return false;
}
