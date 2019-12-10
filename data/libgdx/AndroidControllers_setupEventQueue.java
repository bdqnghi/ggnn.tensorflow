private void setupEventQueue() {
    new Runnable() {

        @SuppressWarnings("synthetic-access")
        @Override
        public void run() {
            synchronized (eventQueue) {
                for (AndroidControllerEvent event : eventQueue) {
                    switch(event.type) {
                        case AndroidControllerEvent.CONNECTED:
                            controllers.add(event.controller);
                            for (ControllerListener listener : listeners) {
                                listener.connected(event.controller);
                            }
                            break;
                        case AndroidControllerEvent.DISCONNECTED:
                            controllers.removeValue(event.controller, true);
                            for (ControllerListener listener : listeners) {
                                listener.disconnected(event.controller);
                            }
                            for (ControllerListener listener : event.controller.getListeners()) {
                                listener.disconnected(event.controller);
                            }
                            break;
                        case AndroidControllerEvent.BUTTON_DOWN:
                            event.controller.buttons.put(event.code, event.code);
                            for (ControllerListener listener : listeners) {
                                if (listener.buttonDown(event.controller, event.code))
                                    break;
                            }
                            for (ControllerListener listener : event.controller.getListeners()) {
                                if (listener.buttonDown(event.controller, event.code))
                                    break;
                            }
                            break;
                        case AndroidControllerEvent.BUTTON_UP:
                            event.controller.buttons.remove(event.code, 0);
                            for (ControllerListener listener : listeners) {
                                if (listener.buttonUp(event.controller, event.code))
                                    break;
                            }
                            for (ControllerListener listener : event.controller.getListeners()) {
                                if (listener.buttonUp(event.controller, event.code))
                                    break;
                            }
                            break;
                        case AndroidControllerEvent.AXIS:
                            event.controller.axes[event.code] = event.axisValue;
                            for (ControllerListener listener : listeners) {
                                if (listener.axisMoved(event.controller, event.code, event.axisValue))
                                    break;
                            }
                            for (ControllerListener listener : event.controller.getListeners()) {
                                if (listener.axisMoved(event.controller, event.code, event.axisValue))
                                    break;
                            }
                            break;
                        default:
                    }
                }
                eventPool.freeAll(eventQueue);
                eventQueue.clear();
            }
            Gdx.app.postRunnable(this);
        }
    }.run();
}
