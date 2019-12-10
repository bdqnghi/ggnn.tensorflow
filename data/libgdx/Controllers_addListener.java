/**
 * Add a global {@link ControllerListener} that can react to events from all {@link Controller} instances. The listener will be
 * invoked on the rendering thread.
 * @param listener
 */
static public void addListener(ControllerListener listener) {
    initialize();
    getManager().addListener(listener);
}
