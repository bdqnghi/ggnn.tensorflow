@Override
public boolean isPeripheralAvailable(Peripheral peripheral) {
    if (peripheral == Peripheral.HardwareKeyboard)
        return true;
    return false;
}
