/**
 * <p>
 * Flushes the batch and realigns the real matrix on the GPU. Subsequent draws won't need adjustment and will be slightly
 * faster as long as the transform matrix is not {@link #setTransformMatrix(Matrix4) changed}.
 * </p>
 * <p>
 * Note: The real transform matrix <em>must</em> be invertible. If a singular matrix is detected, GdxRuntimeException will be
 * thrown.
 * </p>
 * @see SpriteBatch#flush()
 */
public void flushAndSyncTransformMatrix() {
    flush();
    if (adjustNeeded) {
        // vertices flushed, safe now to replace matrix
        haveIdentityRealMatrix = checkIdt(virtualMatrix);
        if (!haveIdentityRealMatrix && virtualMatrix.det() == 0)
            throw new GdxRuntimeException("Transform matrix is singular, can't sync");
        adjustNeeded = false;
        super.setTransformMatrix(virtualMatrix);
    }
}
