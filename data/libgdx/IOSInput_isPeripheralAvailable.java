@Override
public boolean isPeripheralAvailable(Peripheral peripheral) {
    if (peripheral == Peripheral.Accelerometer && config.useAccelerometer)
        return true;
    if (peripheral == Peripheral.MultitouchScreen)
        return true;
    if (peripheral == Peripheral.Vibrator)
        return hasVibrator;
    if (peripheral == Peripheral.Compass)
        return compassSupported;
    // if(peripheral == Peripheral.OnscreenKeyboard) return true;
    return false;
}
