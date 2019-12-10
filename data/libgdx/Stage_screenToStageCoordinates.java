/**
 * Transforms the screen coordinates to stage coordinates.
 * @param screenCoords Input screen coordinates and output for resulting stage coordinates.
 */
public Vector2 screenToStageCoordinates(Vector2 screenCoords) {
    viewport.unproject(screenCoords);
    return screenCoords;
}
