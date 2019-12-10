/**
 * Adds an event listener for Android specific event such as onActivityResult(...).
 */
public void addAndroidEventListener(AndroidEventListener listener) {
    synchronized (androidEventListeners) {
        androidEventListeners.add(listener);
    }
}
