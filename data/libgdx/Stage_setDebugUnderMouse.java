/**
 * If true, debug is enabled only for the actor under the mouse. Can be combined with {@link #setDebugAll(boolean)}.
 */
public void setDebugUnderMouse(boolean debugUnderMouse) {
    if (this.debugUnderMouse == debugUnderMouse)
        return;
    this.debugUnderMouse = debugUnderMouse;
    if (debugUnderMouse)
        debug = true;
    else
        root.setDebug(false, true);
}
