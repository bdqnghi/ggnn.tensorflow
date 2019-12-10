void processEvents() {
    synchronized (touchEvents) {
        justTouched = false;
        for (TouchEvent event : touchEvents) {
            currentEvent = event;
            switch(event.phase) {
                case Began:
                    if (inputProcessor != null)
                        inputProcessor.touchDown(event.x, event.y, event.pointer, Buttons.LEFT);
                    if (numTouched == 1)
                        justTouched = true;
                    break;
                case Cancelled:
                case Ended:
                    if (inputProcessor != null)
                        inputProcessor.touchUp(event.x, event.y, event.pointer, Buttons.LEFT);
                    break;
                case Moved:
                case Stationary:
                    if (inputProcessor != null)
                        inputProcessor.touchDragged(event.x, event.y, event.pointer);
                    break;
            }
        }
        touchEventPool.freeAll(touchEvents);
        touchEvents.clear();
    }
}
