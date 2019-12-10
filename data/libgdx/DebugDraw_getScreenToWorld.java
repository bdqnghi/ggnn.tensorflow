/**
 * takes the screen coordinates and returns the world coordinates.
 *
 * @param screenX
 * @param screenY
 */
public Vec2 getScreenToWorld(float screenX, float screenY) {
    Vec2 screen = new Vec2(screenX, screenY);
    viewportTransform.getScreenToWorld(screen, screen);
    return screen;
}
