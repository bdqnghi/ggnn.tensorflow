/**
 * Creates a picking {@link Ray} from the coordinates given in screen coordinates. It is assumed that the viewport spans the
 * whole screen. The screen coordinates origin is assumed to be in the top left corner, its y-axis pointing down, the x-axis
 * pointing to the right. The returned instance is not a new instance but an internal member only accessible via this function.
 * @return the picking Ray.
 */
public Ray getPickRay(float screenX, float screenY) {
    return getPickRay(screenX, screenY, 0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
}
