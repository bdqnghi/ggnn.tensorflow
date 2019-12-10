/**
 * Sets the transform matrix to be used by this Batch. Even if this is called inside a {@link #begin()}/{@link #end()} block,
 * the current batch is <em>not</em> flushed to the GPU. Instead, for every subsequent draw() the vertices will be transformed
 * on the CPU to match the original batch matrix. This adjustment must be performed until the matrices are realigned by
 * restoring the original matrix, or by calling {@link #flushAndSyncTransformMatrix()} or {@link #end()}.
 */
public void setTransformMatrix(Affine2 transform) {
    Matrix4 realMatrix = super.getTransformMatrix();
    if (checkEqual(realMatrix, transform)) {
        adjustNeeded = false;
    } else {
        virtualMatrix.setAsAffine(transform);
        if (isDrawing()) {
            adjustNeeded = true;
            if (haveIdentityRealMatrix) {
                adjustAffine.set(transform);
            } else {
                adjustAffine.set(realMatrix).inv().mul(transform);
            }
        } else {
            realMatrix.setAsAffine(transform);
            haveIdentityRealMatrix = checkIdt(realMatrix);
        }
    }
}
