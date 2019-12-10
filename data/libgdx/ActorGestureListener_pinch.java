public boolean pinch(Vector2 stageInitialPointer1, Vector2 stageInitialPointer2, Vector2 stagePointer1, Vector2 stagePointer2) {
    actor.stageToLocalCoordinates(initialPointer1.set(stageInitialPointer1));
    actor.stageToLocalCoordinates(initialPointer2.set(stageInitialPointer2));
    actor.stageToLocalCoordinates(pointer1.set(stagePointer1));
    actor.stageToLocalCoordinates(pointer2.set(stagePointer2));
    ActorGestureListener.this.pinch(event, initialPointer1, initialPointer2, pointer1, pointer2);
    return true;
}
