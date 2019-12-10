/**
 * Transforms the stage coordinates to screen coordinates.
 * @param stageCoords Input stage coordinates and output for resulting screen coordinates.
 */
public Vector2 stageToScreenCoordinates(Vector2 stageCoords) {
    viewport.project(stageCoords);
    stageCoords.y = viewport.getScreenHeight() - stageCoords.y;
    return stageCoords;
}
