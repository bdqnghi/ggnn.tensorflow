/**
 * Set the shape renderer transformation matrix, often with the result of {@link #computeTransform()}. Note this causes the
 * shape renderer to be flushed. {@link #resetTransform(ShapeRenderer)} will restore the transform to what it was before this
 * call.
 */
protected void applyTransform(ShapeRenderer shapes, Matrix4 transform) {
    oldTransform.set(shapes.getTransformMatrix());
    shapes.setTransformMatrix(transform);
}
