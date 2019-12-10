public void axisMoved(OisJoystick joystick, int axisIndex, float value) {
    Array<ControllerListener> allListeners = manager.listeners;
    for (int ii = 0, nn = allListeners.size; ii < nn; ii++) allListeners.get(ii).axisMoved(OisController.this, axisIndex, value);
    for (int ii = 0, nn = listeners.size; ii < nn; ii++) listeners.get(ii).axisMoved(OisController.this, axisIndex, value);
}
