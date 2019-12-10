/**
 * Resumes the thread. This call is non-blocking
 */
public void onResume() {
    synchronized (this) {
        paused = false;
        this.notifyAll();
    }
}
