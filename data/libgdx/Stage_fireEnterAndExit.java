private Actor fireEnterAndExit(Actor overLast, int screenX, int screenY, int pointer) {
    // Find the actor under the point.
    screenToStageCoordinates(tempCoords.set(screenX, screenY));
    Actor over = hit(tempCoords.x, tempCoords.y, true);
    if (over == overLast)
        return overLast;
    // Exit overLast.
    if (overLast != null) {
        InputEvent event = Pools.obtain(InputEvent.class);
        event.setStage(this);
        event.setStageX(tempCoords.x);
        event.setStageY(tempCoords.y);
        event.setPointer(pointer);
        event.setType(InputEvent.Type.exit);
        event.setRelatedActor(over);
        overLast.fire(event);
        Pools.free(event);
    }
    // Enter over.
    if (over != null) {
        InputEvent event = Pools.obtain(InputEvent.class);
        event.setStage(this);
        event.setStageX(tempCoords.x);
        event.setStageY(tempCoords.y);
        event.setPointer(pointer);
        event.setType(InputEvent.Type.enter);
        event.setRelatedActor(overLast);
        over.fire(event);
        Pools.free(event);
    }
    return over;
}
