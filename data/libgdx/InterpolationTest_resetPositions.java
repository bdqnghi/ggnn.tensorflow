/**
 * resets {@link #startPosition} and {@link #targetPosition}
 */
void resetPositions() {
    startPosition.set(stage.getWidth() - stage.getWidth() / 5f, stage.getHeight() - stage.getHeight() / 5f);
    targetPosition.set(startPosition.x, stage.getHeight() / 5f);
}
