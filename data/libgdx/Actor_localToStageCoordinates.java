/**
 * Transforms the specified point in the actor's coordinates to be in the stage's coordinates.
 * @see Stage#toScreenCoordinates(Vector2, com.badlogic.gdx.math.Matrix4)
 */
public Vector2 localToStageCoordinates(Vector2 localCoords) {
    return localToAscendantCoordinates(null, localCoords);
}
