/**
 * Takes the world coordinates and puts the corresponding screen coordinates in argScreen.
 *
 * @param worldX
 * @param worldY
 * @param argScreen
 */
public void getWorldToScreenToOut(float worldX, float worldY, Vec2 argScreen) {
    argScreen.set(worldX, worldY);
    viewportTransform.getWorldToScreen(argScreen, argScreen);
}
