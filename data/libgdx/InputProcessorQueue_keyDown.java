public synchronized boolean keyDown(int keycode) {
    queueTime();
    queue.add(KEY_DOWN);
    queue.add(keycode);
    return false;
}
