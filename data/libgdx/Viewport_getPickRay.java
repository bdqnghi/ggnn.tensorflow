/**
 * @see Camera#getPickRay(float, float, float, float, float, float)
 */
public Ray getPickRay(float screenX, float screenY) {
    return camera.getPickRay(screenX, screenY, this.screenX, this.screenY, screenWidth, screenHeight);
}
