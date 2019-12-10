private void gatherControllers(boolean sendEvent) {
    // gather all joysticks and gamepads, remove any disconnected ones
    IntMap<AndroidController> removedControllers = new IntMap<AndroidController>();
    removedControllers.putAll(controllerMap);
    for (int deviceId : InputDevice.getDeviceIds()) {
        InputDevice device = InputDevice.getDevice(deviceId);
        AndroidController controller = controllerMap.get(deviceId);
        if (controller != null) {
            removedControllers.remove(deviceId);
        } else {
            addController(deviceId, sendEvent);
        }
    }
    for (Entry<AndroidController> entry : removedControllers.entries()) {
        removeController(entry.key);
    }
}
