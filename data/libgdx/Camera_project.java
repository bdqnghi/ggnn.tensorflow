/**
 * Projects the {@link Vector3} given in world space to screen coordinates. It's the same as GLU gluProject with one small
 * deviation: The viewport is assumed to span the whole screen. The screen coordinate system has its origin in the
 * <b>bottom</b> left, with the y-axis pointing <b>upwards</b> and the x-axis pointing to the right. This makes it easily
 * useable in conjunction with {@link Batch} and similar classes. This method allows you to specify the viewport position and
 * dimensions in the coordinate system expected by {@link GL20#glViewport(int, int, int, int)}, with the origin in the bottom
 * left corner of the screen.
 * @param viewportX the coordinate of the bottom left corner of the viewport in glViewport coordinates.
 * @param viewportY the coordinate of the bottom left corner of the viewport in glViewport coordinates.
 * @param viewportWidth the width of the viewport in pixels
 * @param viewportHeight the height of the viewport in pixels
 */
public Vector3 project(Vector3 worldCoords, float viewportX, float viewportY, float viewportWidth, float viewportHeight) {
    worldCoords.prj(combined);
    worldCoords.x = viewportWidth * (worldCoords.x + 1) / 2 + viewportX;
    worldCoords.y = viewportHeight * (worldCoords.y + 1) / 2 + viewportY;
    worldCoords.z = (worldCoords.z + 1) / 2;
    return worldCoords;
}
