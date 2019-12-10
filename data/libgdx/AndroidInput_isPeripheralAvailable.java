@Override
public boolean isPeripheralAvailable(Peripheral peripheral) {
    if (peripheral == Peripheral.Accelerometer)
        return accelerometerAvailable;
    if (peripheral == Peripheral.Compass)
        return compassAvailable;
    if (peripheral == Peripheral.HardwareKeyboard)
        return keyboardAvailable;
    if (peripheral == Peripheral.OnscreenKeyboard)
        return true;
    if (peripheral == Peripheral.Vibrator)
        return (Build.VERSION.SDK_INT >= 11 && vibrator != null) ? vibrator.hasVibrator() : vibrator != null;
    if (peripheral == Peripheral.MultitouchScreen)
        return hasMultitouch;
    return false;
}
