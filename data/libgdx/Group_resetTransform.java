/**
 * Restores the shape renderer transform to what it was before {@link #applyTransform(Batch, Matrix4)}. Note this causes the
 * shape renderer to be flushed.
 */
protected void resetTransform(ShapeRenderer shapes) {
    shapes.setTransformMatrix(oldTransform);
}
