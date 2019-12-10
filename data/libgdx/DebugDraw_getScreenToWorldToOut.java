/**
 * takes the screen coordinates and puts the corresponding world coordinates in argWorld.
 *
 * @param screenX
 * @param screenY
 * @param argWorld
 */
public void getScreenToWorldToOut(float screenX, float screenY, Vec2 argWorld) {
    argWorld.set(screenX, screenY);
    viewportTransform.getScreenToWorld(argWorld, argWorld);
}
