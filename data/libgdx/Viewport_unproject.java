/**
 * Transforms the specified screen coordinate to world coordinates.
 * @return The vector that was passed in, transformed to world coordinates.
 * @see Camera#unproject(Vector3)
 */
public Vector3 unproject(Vector3 screenCoords) {
    camera.unproject(screenCoords, screenX, screenY, screenWidth, screenHeight);
    return screenCoords;
}
