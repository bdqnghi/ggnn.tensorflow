/**
 * Set whether or not resize checking is enabled. If disabled, elements will still be resized on window events, but the timer
 * will not check their dimensions periodically.
 *
 * @param enabled true to enable the resize checking timer
 */
public void setResizeCheckingEnabled(boolean enabled) {
    if (enabled && !resizeCheckingEnabled) {
        resizeCheckingEnabled = true;
        if (windowHandler == null) {
            windowHandler = Window.addResizeHandler(this);
        }
        resizeCheckTimer.schedule(resizeCheckDelay);
    } else if (!enabled && resizeCheckingEnabled) {
        resizeCheckingEnabled = false;
        if (windowHandler != null) {
            windowHandler.removeHandler();
            windowHandler = null;
        }
        resizeCheckTimer.cancel();
    }
}
