public synchronized boolean keyUp(int keycode) {
    queueTime();
    queue.add(KEY_UP);
    queue.add(keycode);
    return false;
}
