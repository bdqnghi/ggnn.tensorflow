/**
 * Returns an array of connected {@link Controller} instances. This method should only be called on the rendering thread.
 *
 * @return the connected controllers
 */
static public Array<Controller> getControllers() {
    initialize();
    return getManager().getControllers();
}
