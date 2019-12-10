public synchronized boolean keyTyped(char character) {
    queueTime();
    queue.add(KEY_TYPED);
    queue.add(character);
    return false;
}
