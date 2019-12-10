/**
 * Multiplies the current transformation matrix by a rotation matrix.
 */
public void rotate(float axisX, float axisY, float axisZ, float degrees) {
    transformMatrix.rotate(axisX, axisY, axisZ, degrees);
    matrixDirty = true;
}
