public synchronized boolean touchDragged(int screenX, int screenY, int pointer) {
    queueTime();
    queue.add(TOUCH_DRAGGED);
    queue.add(screenX);
    queue.add(screenY);
    queue.add(pointer);
    return false;
}
