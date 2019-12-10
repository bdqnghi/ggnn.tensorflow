/**
 * Returns the {@link Actor} at the specified location in stage coordinates. Hit testing is performed in the order the actors
 * were inserted into the stage, last inserted actors being tested first. To get stage coordinates from screen coordinates, use
 * {@link #screenToStageCoordinates(Vector2)}.
 * @param touchable If true, the hit detection will respect the {@link Actor#setTouchable(Touchable) touchability}.
 * @return May be null if no actor was hit.
 */
public Actor hit(float stageX, float stageY, boolean touchable) {
    root.parentToLocalCoordinates(tempCoords.set(stageX, stageY));
    return root.hit(tempCoords.x, tempCoords.y, touchable);
}
