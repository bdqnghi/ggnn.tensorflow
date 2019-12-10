public void povMoved(OisJoystick joystick, int povIndex, OisPov ignored) {
    PovDirection value = getPov(povIndex);
    Array<ControllerListener> allListeners = manager.listeners;
    for (int ii = 0, nn = allListeners.size; ii < nn; ii++) allListeners.get(ii).povMoved(OisController.this, povIndex, value);
    for (int ii = 0, nn = listeners.size; ii < nn; ii++) listeners.get(ii).povMoved(OisController.this, povIndex, value);
}
