public boolean isConnected() {
    synchronized (this) {
        return connected;
    }
}
