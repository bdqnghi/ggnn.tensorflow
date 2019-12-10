public boolean tap(float stageX, float stageY, int count, int button) {
    actor.stageToLocalCoordinates(tmpCoords.set(stageX, stageY));
    ActorGestureListener.this.tap(event, tmpCoords.x, tmpCoords.y, count, button);
    return true;
}
