/**
 * Removes all targets and sources.
 */
public void clear() {
    targets.clear();
    for (Entry<Source, DragListener> entry : sourceListeners.entries()) entry.key.actor.removeCaptureListener(entry.value);
    sourceListeners.clear();
}
