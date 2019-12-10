/**
 * Removes every global {@link ControllerListener} previously added.
 */
static public void clearListeners() {
    initialize();
    getManager().clearListeners();
}
