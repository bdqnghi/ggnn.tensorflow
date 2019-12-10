public void run() {
    try {
        initialize(config);
    } catch (Throwable ex) {
        exception(ex);
    }
}
