/**
 * Removes a global {@link ControllerListener}. The method must be called on the rendering thread.
 * @param listener
 */
static public void removeListener(ControllerListener listener) {
    initialize();
    getManager().removeListener(listener);
}
