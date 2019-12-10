public synchronized int available() {
    return count - pos;
}
