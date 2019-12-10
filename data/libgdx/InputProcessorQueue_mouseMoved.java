public synchronized boolean mouseMoved(int screenX, int screenY) {
    queueTime();
    queue.add(MOUSE_MOVED);
    queue.add(screenX);
    queue.add(screenY);
    return false;
}
