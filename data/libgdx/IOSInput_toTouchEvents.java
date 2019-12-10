private void toTouchEvents(long touches, UIEvent uiEvent) {
    long array = NSSetExtensions.allObjects(touches);
    int length = (int) NSArrayExtensions.count(array);
    for (int i = 0; i < length; i++) {
        long touchHandle = NSArrayExtensions.objectAtIndex$(array, i);
        UITouch touch = UI_TOUCH_WRAPPER.wrap(touchHandle);
        CGPoint loc = touch.getLocationInView(touch.getView());
        synchronized (touchEvents) {
            UITouchPhase phase = touch.getPhase();
            TouchEvent event = touchEventPool.obtain();
            event.x = (int) (loc.getX() * app.displayScaleFactor);
            event.y = (int) (loc.getY() * app.displayScaleFactor);
            event.phase = phase;
            event.timestamp = (long) (touch.getTimestamp() * 1000000000);
            touchEvents.add(event);
            if (phase == UITouchPhase.Began) {
                event.pointer = getFreePointer();
                touchDown[event.pointer] = touch.getHandle();
                touchX[event.pointer] = event.x;
                touchY[event.pointer] = event.y;
                deltaX[event.pointer] = 0;
                deltaY[event.pointer] = 0;
                numTouched++;
            }
            if (phase == UITouchPhase.Moved || phase == UITouchPhase.Stationary) {
                event.pointer = findPointer(touch);
                deltaX[event.pointer] = event.x - touchX[event.pointer];
                deltaY[event.pointer] = event.y - touchY[event.pointer];
                touchX[event.pointer] = event.x;
                touchY[event.pointer] = event.y;
            }
            if (phase == UITouchPhase.Cancelled || phase == UITouchPhase.Ended) {
                event.pointer = findPointer(touch);
                touchDown[event.pointer] = 0;
                touchX[event.pointer] = event.x;
                touchY[event.pointer] = event.y;
                deltaX[event.pointer] = 0;
                deltaY[event.pointer] = 0;
                numTouched--;
            }
        }
    }
}
