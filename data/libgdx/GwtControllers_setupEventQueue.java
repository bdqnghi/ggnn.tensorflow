public void setupEventQueue() {
    new Runnable() {

        @SuppressWarnings("synthetic-access")
        @Override
        public void run() {
            synchronized (eventQueue) {
                for (GwtControllerEvent event : eventQueue) {
                    switch(event.type) {
                        case GwtControllerEvent.CONNECTED:
                            controllers.add(event.controller);
                            for (ControllerListener listener : listeners) {
                                listener.connected(event.controller);
                            }
                            break;
                        case GwtControllerEvent.DISCONNECTED:
                            controllers.removeValue(event.controller, true);
                            for (ControllerListener listener : listeners) {
                                listener.disconnected(event.controller);
                            }
                            for (ControllerListener listener : event.controller.getListeners()) {
                                listener.disconnected(event.controller);
                            }
                            break;
                        case GwtControllerEvent.BUTTON_DOWN:
                            event.controller.buttons.put(event.code, event.amount);
                            for (ControllerListener listener : listeners) {
                                if (listener.buttonDown(event.controller, event.code))
                                    break;
                            }
                            for (ControllerListener listener : event.controller.getListeners()) {
                                if (listener.buttonDown(event.controller, event.code))
                                    break;
                            }
                            break;
                        case GwtControllerEvent.BUTTON_UP:
                            event.controller.buttons.remove(event.code, event.amount);
                            for (ControllerListener listener : listeners) {
                                if (listener.buttonUp(event.controller, event.code))
                                    break;
                            }
                            for (ControllerListener listener : event.controller.getListeners()) {
                                if (listener.buttonUp(event.controller, event.code))
                                    break;
                            }
                            break;
                        case GwtControllerEvent.AXIS:
                            event.controller.axes[event.code] = event.amount;
                            for (ControllerListener listener : listeners) {
                                if (listener.axisMoved(event.controller, event.code, event.amount))
                                    break;
                            }
                            for (ControllerListener listener : event.controller.getListeners()) {
                                if (listener.axisMoved(event.controller, event.code, event.amount))
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
