public void touchUp(InputEvent event, float x, float y, int pointer, int button) {
    if (pointer != draggingPointer)
        return;
    draggingPointer = -1;
    if (!calculatePositionAndValue(x, y)) {
        // Fire an event on touchUp even if the value didn't change, so listeners can see when a drag ends via isDragging.
        ChangeEvent changeEvent = Pools.obtain(ChangeEvent.class);
        fire(changeEvent);
        Pools.free(changeEvent);
    }
}
