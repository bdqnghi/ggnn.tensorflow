public void buttonPressed(OisJoystick joystick, int buttonIndex) {
    Array<ControllerListener> allListeners = manager.listeners;
    for (int ii = 0, nn = allListeners.size; ii < nn; ii++) allListeners.get(ii).buttonDown(OisController.this, buttonIndex);
    for (int ii = 0, nn = listeners.size; ii < nn; ii++) listeners.get(ii).buttonDown(OisController.this, buttonIndex);
}
