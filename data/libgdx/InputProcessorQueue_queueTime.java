private void queueTime() {
    long time = TimeUtils.nanoTime();
    queue.add((int) (time >> 32));
    queue.add((int) time);
}
