/**
 * Queue an "event" to be run on the GL rendering thread.
 * @param r the runnable to be run on the GL rendering thread.
 */
public void queueEvent(Runnable r) {
    if (r == null) {
        throw new IllegalArgumentException("r must not be null");
    }
    synchronized (sGLThreadManager) {
        mEventQueue.add(r);
        sGLThreadManager.notifyAll();
    }
}
