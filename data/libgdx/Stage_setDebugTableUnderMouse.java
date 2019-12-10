/**
 * If true, debug is enabled only for the first ascendant of the actor under the mouse that is a table. Can be combined with
 * {@link #setDebugAll(boolean)}.
 */
public void setDebugTableUnderMouse(boolean debugTableUnderMouse) {
    setDebugTableUnderMouse(debugTableUnderMouse ? Debug.all : Debug.none);
}
