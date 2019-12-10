/**
 * Transforms the specified world coordinate to screen coordinates.
 * @return The vector that was passed in, transformed to screen coordinates.
 * @see Camera#project(Vector3)
 */
public Vector3 project(Vector3 worldCoords) {
    camera.project(worldCoords, screenX, screenY, screenWidth, screenHeight);
    return worldCoords;
}
