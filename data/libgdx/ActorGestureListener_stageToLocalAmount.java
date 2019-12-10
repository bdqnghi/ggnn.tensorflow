private void stageToLocalAmount(Vector2 amount) {
    actor.stageToLocalCoordinates(amount);
    amount.sub(actor.stageToLocalCoordinates(tmpCoords2.set(0, 0)));
}
