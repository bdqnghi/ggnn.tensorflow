void sleep(int millis) {
    try {
        if (millis > 0)
            Thread.sleep(millis);
    } catch (InterruptedException ignored) {
    }
}
