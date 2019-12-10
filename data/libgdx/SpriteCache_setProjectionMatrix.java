public void setProjectionMatrix(Matrix4 projection) {
    if (drawing)
        throw new IllegalStateException("Can't set the matrix within begin/end.");
    projectionMatrix.set(projection);
}
