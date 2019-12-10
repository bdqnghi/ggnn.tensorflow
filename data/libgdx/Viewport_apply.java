/**
 * Applies the viewport to the camera and sets the glViewport.
 * @param centerCamera If true, the camera position is set to the center of the world.
 */
public void apply(boolean centerCamera) {
    Gdx.gl.glViewport(screenX, screenY, screenWidth, screenHeight);
    camera.viewportWidth = worldWidth;
    camera.viewportHeight = worldHeight;
    if (centerCamera)
        camera.position.set(worldWidth / 2, worldHeight / 2, 0);
    camera.update();
}
