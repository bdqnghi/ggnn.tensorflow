/**
 * Returns the JGLFW window handle. Note this should not be stored externally as it may change if the window is recreated to
 * enter/exit fullscreen.
 */
public long getWindow() {
    return window;
}
