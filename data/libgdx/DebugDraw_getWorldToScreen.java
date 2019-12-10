/**
 * Takes the world coordinates and returns the screen coordinates.
 *
 * @param worldX
 * @param worldY
 */
public Vec2 getWorldToScreen(float worldX, float worldY) {
    Vec2 argScreen = new Vec2(worldX, worldY);
    viewportTransform.getWorldToScreen(argScreen, argScreen);
    return argScreen;
}
