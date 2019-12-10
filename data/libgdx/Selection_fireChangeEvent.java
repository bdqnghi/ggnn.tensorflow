/**
 * Fires a change event on the selection's actor, if any. Called internally when the selection changes, depending on
 * {@link #setProgrammaticChangeEvents(boolean)}.
 * @return true if the change should be undone.
 */
public boolean fireChangeEvent() {
    if (actor == null)
        return false;
    ChangeEvent changeEvent = Pools.obtain(ChangeEvent.class);
    try {
        return actor.fire(changeEvent);
    } finally {
        Pools.free(changeEvent);
    }
}
