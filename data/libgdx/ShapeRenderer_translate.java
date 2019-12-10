/**
 * Multiplies the current transformation matrix by a translation matrix.
 */
public void translate(float x, float y, float z) {
    transformMatrix.translate(x, y, z);
    matrixDirty = true;
}
