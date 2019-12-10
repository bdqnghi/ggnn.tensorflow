@Override
public boolean isPeripheralAvailable(Peripheral peripheral) {
    if (peripheral == Peripheral.Accelerometer)
        return true;
    if (peripheral == Peripheral.Compass)
        return true;
    if (peripheral == Peripheral.MultitouchScreen)
        return multiTouch;
    return false;
}
