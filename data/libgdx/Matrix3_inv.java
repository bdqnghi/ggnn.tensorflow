/**
 * Inverts this matrix given that the determinant is != 0.
 * @return This matrix for the purpose of chaining operations.
 * @throws GdxRuntimeException if the matrix is singular (not invertible)
 */
public Matrix3 inv() {
    float det = det();
    if (det == 0)
        throw new GdxRuntimeException("Can't invert a singular matrix");
    float inv_det = 1.0f / det;
    float[] tmp = this.tmp, val = this.val;
    tmp[M00] = val[M11] * val[M22] - val[M21] * val[M12];
    tmp[M10] = val[M20] * val[M12] - val[M10] * val[M22];
    tmp[M20] = val[M10] * val[M21] - val[M20] * val[M11];
    tmp[M01] = val[M21] * val[M02] - val[M01] * val[M22];
    tmp[M11] = val[M00] * val[M22] - val[M20] * val[M02];
    tmp[M21] = val[M20] * val[M01] - val[M00] * val[M21];
    tmp[M02] = val[M01] * val[M12] - val[M11] * val[M02];
    tmp[M12] = val[M10] * val[M02] - val[M00] * val[M12];
    tmp[M22] = val[M00] * val[M11] - val[M10] * val[M01];
    val[M00] = inv_det * tmp[M00];
    val[M10] = inv_det * tmp[M10];
    val[M20] = inv_det * tmp[M20];
    val[M01] = inv_det * tmp[M01];
    val[M11] = inv_det * tmp[M11];
    val[M21] = inv_det * tmp[M21];
    val[M02] = inv_det * tmp[M02];
    val[M12] = inv_det * tmp[M12];
    val[M22] = inv_det * tmp[M22];
    return this;
}
