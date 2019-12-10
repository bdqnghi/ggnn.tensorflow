/**
 * Starts a new batch of shapes. Shapes drawn within the batch will attempt to use the type specified. The call to this method
 * must be paired with a call to {@link #end()}.
 * @see #setAutoShapeType(boolean)
 */
public void begin(ShapeType type) {
    if (shapeType != null)
        throw new IllegalStateException("Call end() before beginning a new shape batch.");
    shapeType = type;
    if (matrixDirty) {
        combinedMatrix.set(projectionMatrix);
        Matrix4.mul(combinedMatrix.val, transformMatrix.val);
        matrixDirty = false;
    }
    renderer.begin(combinedMatrix, shapeType.getGlType());
}
