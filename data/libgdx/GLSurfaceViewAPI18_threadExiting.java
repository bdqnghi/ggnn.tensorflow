public synchronized void threadExiting(GLThread thread) {
    if (LOG_THREADS) {
        Log.i("GLThread", "exiting tid=" + thread.getId());
    }
    thread.mExited = true;
    if (mEglOwner == thread) {
        mEglOwner = null;
    }
    notifyAll();
}
