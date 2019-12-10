/**
 * Postmultiplies this matrix with the given matrix, storing the result in this matrix. For example:
 *
 * <pre>
 * A.mul(B) results in A := AB.
 * </pre>
 *
 * @param matrix The other matrix to multiply by.
 * @return This matrix for the purpose of chaining operations together.
 */
public Matrix4 mul(Matrix4 matrix) {
    mul(val, matrix.val);
    return this;
}
