/**
 * Transforms the specified point in the stage's coordinates to the actor's local coordinate system.
 */
public Vector2 stageToLocalCoordinates(Vector2 stageCoords) {
    if (parent != null)
        parent.stageToLocalCoordinates(stageCoords);
    parentToLocalCoordinates(stageCoords);
    return stageCoords;
}
