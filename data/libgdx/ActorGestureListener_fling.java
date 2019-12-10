public boolean fling(float velocityX, float velocityY, int button) {
    stageToLocalAmount(tmpCoords.set(velocityX, velocityY));
    ActorGestureListener.this.fling(event, tmpCoords.x, tmpCoords.y, button);
    return true;
}
