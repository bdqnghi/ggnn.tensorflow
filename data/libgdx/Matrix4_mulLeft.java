/**
 * Premultiplies this matrix with the given matrix, storing the result in this matrix. For example:
 *
 * <pre>
 * A.mulLeft(B) results in A := BA.
 * </pre>
 *
 * @param matrix The other matrix to multiply by.
 * @return This matrix for the purpose of chaining operations together.
 */
public Matrix4 mulLeft(Matrix4 matrix) {
    tmpMat.set(matrix);
    mul(tmpMat.val, this.val);
    return set(tmpMat);
}
