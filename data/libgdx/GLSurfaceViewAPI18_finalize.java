@Override
protected void finalize() throws Throwable {
    try {
        if (mGLThread != null) {
            // GLThread may still be running if this view was never
            // attached to a window.
            mGLThread.requestExitAndWait();
        }
    } finally {
        super.finalize();
    }
}
