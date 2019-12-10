public boolean pan(float stageX, float stageY, float deltaX, float deltaY) {
    stageToLocalAmount(tmpCoords.set(deltaX, deltaY));
    deltaX = tmpCoords.x;
    deltaY = tmpCoords.y;
    actor.stageToLocalCoordinates(tmpCoords.set(stageX, stageY));
    ActorGestureListener.this.pan(event, tmpCoords.x, tmpCoords.y, deltaX, deltaY);
    return true;
}
