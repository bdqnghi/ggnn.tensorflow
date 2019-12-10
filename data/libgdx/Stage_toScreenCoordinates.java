/**
 * Transforms the coordinates to screen coordinates. The coordinates can be anywhere in the stage since the transform matrix
 * describes how to convert them. The transform matrix is typically obtained from {@link Batch#getTransformMatrix()} during
 * {@link Actor#draw(Batch, float)}.
 * @see Actor#localToStageCoordinates(Vector2)
 */
public Vector2 toScreenCoordinates(Vector2 coords, Matrix4 transformMatrix) {
    return viewport.toScreenCoordinates(coords, transformMatrix);
}
