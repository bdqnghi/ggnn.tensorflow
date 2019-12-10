/**
 * If true, debug lines are shown for all actors.
 */
public void setDebugAll(boolean debugAll) {
    if (this.debugAll == debugAll)
        return;
    this.debugAll = debugAll;
    if (debugAll)
        debug = true;
    else
        root.setDebug(false, true);
}
