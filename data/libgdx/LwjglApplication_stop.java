public void stop() {
    running = false;
    try {
        mainLoopThread.join();
    } catch (Exception ex) {
    }
}
