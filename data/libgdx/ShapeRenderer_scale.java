/**
 * Multiplies the current transformation matrix by a scale matrix.
 */
public void scale(float scaleX, float scaleY, float scaleZ) {
    transformMatrix.scale(scaleX, scaleY, scaleZ);
    matrixDirty = true;
}
