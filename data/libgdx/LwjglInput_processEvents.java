void processEvents() {
    synchronized (this) {
        if (processor != null) {
            InputProcessor processor = this.processor;
            int len = keyEvents.size();
            for (int i = 0; i < len; i++) {
                KeyEvent e = keyEvents.get(i);
                currentEventTimeStamp = e.timeStamp;
                switch(e.type) {
                    case KeyEvent.KEY_DOWN:
                        processor.keyDown(e.keyCode);
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
                }
                usedTouchEvents.free(e);
            }
        } else {
            int len = touchEvents.size();
            for (int i = 0; i < len; i++) {
                usedTouchEvents.free(touchEvents.get(i));
            }
            len = keyEvents.size();
            for (int i = 0; i < len; i++) {
                usedKeyEvents.free(keyEvents.get(i));
            }
        }
        keyEvents.clear();
        touchEvents.clear();
    }
}
