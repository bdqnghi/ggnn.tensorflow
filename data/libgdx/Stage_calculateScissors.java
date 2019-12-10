/**
 * Calculates window scissor coordinates from local coordinates using the batch's current transformation matrix.
 * @see ScissorStack#calculateScissors(Camera, float, float, float, float, Matrix4, Rectangle, Rectangle)
 */
public void calculateScissors(Rectangle localRect, Rectangle scissorRect) {
    viewport.calculateScissors(batch.getTransformMatrix(), localRect, scissorRect);
    Matrix4 transformMatrix;
    if (debugShapes != null && debugShapes.isDrawing())
        transformMatrix = debugShapes.getTransformMatrix();
    else
        transformMatrix = batch.getTransformMatrix();
    viewport.calculateScissors(transformMatrix, localRect, scissorRect);
}
