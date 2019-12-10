protected void addController(int deviceId, boolean sendEvent) {
    InputDevice device = InputDevice.getDevice(deviceId);
    if (!isController(device))
        return;
    String name = device.getName();
    AndroidController controller = new AndroidController(deviceId, name);
    controllerMap.put(deviceId, controller);
    if (sendEvent) {
        synchronized (eventQueue) {
            AndroidControllerEvent event = eventPool.obtain();
            event.type = AndroidControllerEvent.CONNECTED;
            event.controller = controller;
            eventQueue.add(event);
        }
    } else {
        controllers.add(controller);
    }
    Gdx.app.log(TAG, "added controller '" + name + "'");
}
