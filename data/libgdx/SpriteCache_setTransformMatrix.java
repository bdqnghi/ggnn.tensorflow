public void setTransformMatrix(Matrix4 transform) {
    if (drawing)
        throw new IllegalStateException("Can't set the matrix within begin/end.");
    transformMatrix.set(transform);
}
