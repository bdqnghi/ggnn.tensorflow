@Override
public void run() {
    setName("GLThread " + getId());
    if (LOG_THREADS) {
        Log.i("GLThread", "starting tid=" + getId());
    }
    try {
        guardedRun();
    } catch (InterruptedException e) {
    // fall thru and exit normally
    } finally {
        sGLThreadManager.threadExiting(this);
    }
}
