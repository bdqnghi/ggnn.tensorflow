/**
 * Removes an event listener for Android specific event such as onActivityResult(...).
 */
public void removeAndroidEventListener(AndroidEventListener listener) {
    synchronized (androidEventListeners) {
        androidEventListeners.removeValue(listener, true);
    }
}
