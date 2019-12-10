public void run() {
    while (true) {
        synchronized (this) {
            try {
                while (paused) wait();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        if (exit)
            return;
        runnable.run();
    }
}
