/**
 * Premultiplies this matrix with the provided matrix and stores the result in this matrix. For example:
 *
 * <pre>
 * A.mulLeft(B) results in A := BA
 * </pre>
 * @param m The other Matrix to multiply by
 * @return This matrix for the purpose of chaining operations.
 */
public Matrix3 mulLeft(Matrix3 m) {
    float[] val = this.val;
    float v00 = m.val[M00] * val[M00] + m.val[M01] * val[M10] + m.val[M02] * val[M20];
    float v01 = m.val[M00] * val[M01] + m.val[M01] * val[M11] + m.val[M02] * val[M21];
    float v02 = m.val[M00] * val[M02] + m.val[M01] * val[M12] + m.val[M02] * val[M22];
    float v10 = m.val[M10] * val[M00] + m.val[M11] * val[M10] + m.val[M12] * val[M20];
    float v11 = m.val[M10] * val[M01] + m.val[M11] * val[M11] + m.val[M12] * val[M21];
    float v12 = m.val[M10] * val[M02] + m.val[M11] * val[M12] + m.val[M12] * val[M22];
    float v20 = m.val[M20] * val[M00] + m.val[M21] * val[M10] + m.val[M22] * val[M20];
    float v21 = m.val[M20] * val[M01] + m.val[M21] * val[M11] + m.val[M22] * val[M21];
    float v22 = m.val[M20] * val[M02] + m.val[M21] * val[M12] + m.val[M22] * val[M22];
    val[M00] = v00;
    val[M10] = v10;
    val[M20] = v20;
    val[M01] = v01;
    val[M11] = v11;
    val[M21] = v21;
    val[M02] = v02;
    val[M12] = v12;
    val[M22] = v22;
    return this;
}
