/**
 * Inverts this matrix given that the determinant is != 0.
 * @return This matrix for the purpose of chaining operations.
 * @throws GdxRuntimeException if the matrix is singular (not invertible)
 */
public Affine2 inv() {
    float det = det();
    if (det == 0)
        throw new GdxRuntimeException("Can't invert a singular affine matrix");
    float invDet = 1.0f / det;
    float tmp00 = m11;
    float tmp01 = -m01;
    float tmp02 = m01 * m12 - m11 * m02;
    float tmp10 = -m10;
    float tmp11 = m00;
    float tmp12 = m10 * m02 - m00 * m12;
    m00 = invDet * tmp00;
    m01 = invDet * tmp01;
    m02 = invDet * tmp02;
    m10 = invDet * tmp10;
    m11 = invDet * tmp11;
    m12 = invDet * tmp12;
    return this;
}
