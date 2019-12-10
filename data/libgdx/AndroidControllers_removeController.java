protected void removeController(int deviceId) {
    AndroidController controller = controllerMap.remove(deviceId);
    if (controller != null) {
        synchronized (eventQueue) {
            AndroidControllerEvent event = eventPool.obtain();
            event.type = AndroidControllerEvent.DISCONNECTED;
            event.controller = controller;
            eventQueue.add(event);
        }
        Gdx.app.log(TAG, "removed controller '" + controller.getName() + "'");
    }
}
