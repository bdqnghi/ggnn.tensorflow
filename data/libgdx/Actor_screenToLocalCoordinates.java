/**
 * Transforms the specified point in screen coordinates to the actor's local coordinate system.
 */
public Vector2 screenToLocalCoordinates(Vector2 screenCoords) {
    Stage stage = this.stage;
    if (stage == null)
        return screenCoords;
    return stageToLocalCoordinates(stage.screenToStageCoordinates(screenCoords));
}
