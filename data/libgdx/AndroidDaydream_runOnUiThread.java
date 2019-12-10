@Override
public void runOnUiThread(Runnable runnable) {
    if (Looper.myLooper() != Looper.getMainLooper()) {
        // The current thread is not the UI thread.
        // Let's post the runnable to the event queue of the UI thread.
        new Handler(Looper.getMainLooper()).post(runnable);
    } else {
        // The current thread is the UI thread already.
        // Let's execute the runnable immediately.
        runnable.run();
    }
}
