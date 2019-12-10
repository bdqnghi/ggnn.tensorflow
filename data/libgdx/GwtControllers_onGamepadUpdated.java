@Override
public void onGamepadUpdated(int index) {
    Gamepad gamepad = Gamepad.getGamepad(index);
    GwtController controller = controllerMap.get(index);
    if (gamepad != null && controller != null) {
        // Determine what changed
        JsArrayNumber axes = gamepad.getAxes();
        JsArrayNumber buttons = gamepad.getButtons();
        synchronized (eventQueue) {
            for (int i = 0, j = axes.length(); i < j; i++) {
                float oldAxis = controller.getAxis(i);
                float newAxis = (float) axes.get(i);
                if (oldAxis != newAxis) {
                    GwtControllerEvent event = eventPool.obtain();
                    event.type = GwtControllerEvent.AXIS;
                    event.controller = controller;
                    event.code = i;
                    event.amount = newAxis;
                    eventQueue.add(event);
                }
            }
            for (int i = 0, j = buttons.length(); i < j; i++) {
                float oldButton = controller.getButtonAmount(i);
                float newButton = (float) buttons.get(i);
                if (oldButton != newButton) {
                    if ((oldButton < 0.5f && newButton < 0.5f) || (oldButton >= 0.5f && newButton >= 0.5f)) {
                        controller.buttons.put(i, newButton);
                        continue;
                    }
                    GwtControllerEvent event = eventPool.obtain();
                    event.type = newButton >= 0.5f ? GwtControllerEvent.BUTTON_DOWN : GwtControllerEvent.BUTTON_UP;
                    event.controller = controller;
                    event.code = i;
                    event.amount = newButton;
                    eventQueue.add(event);
                }
            }
        }
    }
}
