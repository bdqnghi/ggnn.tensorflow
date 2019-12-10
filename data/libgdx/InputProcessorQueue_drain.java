public void drain() {
    IntArray q = processingQueue;
    synchronized (this) {
        if (processor == null) {
            queue.clear();
            return;
        }
        q.addAll(queue);
        queue.clear();
    }
    for (int i = 0, n = q.size; i < n; ) {
        currentEventTime = (long) q.get(i++) << 32 | q.get(i++) & 0xFFFFFFFFL;
        switch(q.get(i++)) {
            case KEY_DOWN:
                processor.keyDown(q.get(i++));
                break;
            case KEY_UP:
                processor.keyUp(q.get(i++));
                break;
            case KEY_TYPED:
                processor.keyTyped((char) q.get(i++));
                break;
            case TOUCH_DOWN:
                processor.touchDown(q.get(i++), q.get(i++), q.get(i++), q.get(i++));
                break;
            case TOUCH_UP:
                processor.touchUp(q.get(i++), q.get(i++), q.get(i++), q.get(i++));
                break;
            case TOUCH_DRAGGED:
                processor.touchDragged(q.get(i++), q.get(i++), q.get(i++));
                break;
            case MOUSE_MOVED:
                processor.mouseMoved(q.get(i++), q.get(i++));
                break;
            case SCROLLED:
                processor.scrolled(q.get(i++));
                break;
        }
    }
    q.clear();
}
