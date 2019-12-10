/**
 * If true, debug is enabled only for the parent of the actor under the mouse. Can be combined with
 * {@link #setDebugAll(boolean)}.
 */
public void setDebugParentUnderMouse(boolean debugParentUnderMouse) {
    if (this.debugParentUnderMouse == debugParentUnderMouse)
        return;
    this.debugParentUnderMouse = debugParentUnderMouse;
    if (debugParentUnderMouse)
        debug = true;
    else
        root.setDebug(false, true);
}
