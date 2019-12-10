public void requestExitAndWait() {
    // deadlock!
    synchronized (sGLThreadManager) {
        mShouldExit = true;
        sGLThreadManager.notifyAll();
        while (!mExited) {
            try {
                sGLThreadManager.wait();
            } catch (InterruptedException ex) {
                Thread.currentThread().interrupt();
            }
        }
    }
}
