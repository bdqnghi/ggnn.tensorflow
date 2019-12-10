/**
 * Function to translate a point given in screen coordinates to world space. It's the same as GLU gluUnProject but does not
 * rely on OpenGL. The viewport is assumed to span the whole screen and is fetched from {@link Graphics#getWidth()} and
 * {@link Graphics#getHeight()}. The x- and y-coordinate of vec are assumed to be in screen coordinates (origin is the top left
 * corner, y pointing down, x pointing to the right) as reported by the touch methods in {@link Input}. A z-coordinate of 0
 * will return a point on the near plane, a z-coordinate of 1 will return a point on the far plane.
 * @param screenCoords the point in screen coordinates
 */
public Vector3 unproject(Vector3 screenCoords) {
    unproject(screenCoords, 0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    return screenCoords;
}
