@Override
public void onGamepadDisconnected(int index) {
    GwtController controller = controllerMap.remove(index);
    if (controller != null) {
        synchronized (eventQueue) {
            GwtControllerEvent event = eventPool.obtain();
            event.type = GwtControllerEvent.DISCONNECTED;
            event.controller = controller;
            eventQueue.add(event);
        }
    }
}
