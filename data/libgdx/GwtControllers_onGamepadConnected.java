@Override
public void onGamepadConnected(int index) {
    Gamepad gamepad = Gamepad.getGamepad(index);
    GwtController controller = new GwtController(gamepad.getIndex(), gamepad.getId());
    controllerMap.put(index, controller);
    synchronized (eventQueue) {
        GwtControllerEvent event = eventPool.obtain();
        event.type = GwtControllerEvent.CONNECTED;
        event.controller = controller;
        eventQueue.add(event);
    }
}
