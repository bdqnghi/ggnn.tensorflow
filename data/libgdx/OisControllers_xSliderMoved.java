public void xSliderMoved(OisJoystick joystick, int sliderIndex, boolean value) {
    Array<ControllerListener> allListeners = manager.listeners;
    for (int ii = 0, nn = allListeners.size; ii < nn; ii++) allListeners.get(ii).xSliderMoved(OisController.this, sliderIndex, value);
    for (int ii = 0, nn = listeners.size; ii < nn; ii++) listeners.get(ii).xSliderMoved(OisController.this, sliderIndex, value);
}
