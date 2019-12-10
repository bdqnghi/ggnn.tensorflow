/**
 * Stops this thread
 */
public void stopThread() {
    exit = true;
    if (paused)
        onResume();
}
