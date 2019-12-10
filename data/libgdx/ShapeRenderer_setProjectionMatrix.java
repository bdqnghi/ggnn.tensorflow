/**
 * Sets the projection matrix to be used for rendering. Usually this will be set to {@link Camera#combined}.
 * @param matrix
 */
public void setProjectionMatrix(Matrix4 matrix) {
    projectionMatrix.set(matrix);
    matrixDirty = true;
}
