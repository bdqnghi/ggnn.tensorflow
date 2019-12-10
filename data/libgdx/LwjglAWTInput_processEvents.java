void processEvents() {
    synchronized (this) {
        justTouched = false;
        if (keyJustPressed) {
            keyJustPressed = false;
            for (int i = 0; i < justPressedKeys.length; i++) {
                justPressedKeys[i] = false;
            }
        }
        if (processor != null) {
            InputProcessor processor = this.processor;
            int len = keyEvents.size();
            for (int i = 0; i < len; i++) {
                KeyEvent e = keyEvents.get(i);
                currentEventTimeStamp = e.timeStamp;
                switch(e.type) {
                    case KeyEvent.KEY_DOWN:
                        processor.keyDown(e.keyCode);
                        keyJustPressed = true;
                        justPressedKeys[e.keyCode] = true;
                        break;
                    case KeyEvent.KEY_UP:
                        processor.keyUp(e.keyCode);
                        break;
                    case KeyEvent.KEY_TYPED:
                        processor.keyTyped(e.keyChar);
                }
                usedKeyEvents.free(e);
            }
            len = touchEvents.size();
            for (int i = 0; i < len; i++) {
                TouchEvent e = touchEvents.get(i);
                currentEventTimeStamp = e.timeStamp;
                switch(e.type) {
                    case TouchEvent.TOUCH_DOWN:
                        processor.touchDown(e.x, e.y, e.pointer, e.button);
                        justTouched = true;
                        break;
                    case TouchEvent.TOUCH_UP:
                        processor.touchUp(e.x, e.y, e.pointer, e.button);
                        break;
                    case TouchEvent.TOUCH_DRAGGED:
                        processor.touchDragged(e.x, e.y, e.pointer);
                        break;
                    case TouchEvent.TOUCH_MOVED:
                        processor.mouseMoved(e.x, e.y);
                        break;
                    case TouchEvent.TOUCH_SCROLLED:
                        processor.scrolled(e.scrollAmount);
                        break;
                }
                usedTouchEvents.free(e);
            }
        } else {
            int len = touchEvents.size();
            for (int i = 0; i < len; i++) {
                TouchEvent event = touchEvents.get(i);
                if (event.type == TouchEvent.TOUCH_DOWN)
                    justTouched = true;
                usedTouchEvents.free(event);
            }
            len = keyEvents.size();
            for (int i = 0; i < len; i++) {
                usedKeyEvents.free(keyEvents.get(i));
            }
        }
        if (touchEvents.size() == 0) {
            deltaX = 0;
            deltaY = 0;
        }
        keyEvents.clear();
        touchEvents.clear();
    }
}
