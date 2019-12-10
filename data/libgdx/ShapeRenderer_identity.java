/**
 * Sets the transformation matrix to identity.
 */
public void identity() {
    transformMatrix.idt();
    matrixDirty = true;
}
