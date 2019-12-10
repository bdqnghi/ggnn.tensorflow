public synchronized boolean scrolled(int amount) {
    queueTime();
    queue.add(SCROLLED);
    queue.add(amount);
    return false;
}
