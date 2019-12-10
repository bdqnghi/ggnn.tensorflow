/**
 * Postmultiplies this matrix with the provided matrix and stores the result in this matrix. For example:
 *
 * <pre>
 * A.mul(B) results in A := AB
 * </pre>
 * @param other Matrix to multiply by.
 * @return This matrix for the purpose of chaining operations together.
 */
public Affine2 mul(Affine2 other) {
    float tmp00 = m00 * other.m00 + m01 * other.m10;
    float tmp01 = m00 * other.m01 + m01 * other.m11;
    float tmp02 = m00 * other.m02 + m01 * other.m12 + m02;
    float tmp10 = m10 * other.m00 + m11 * other.m10;
    float tmp11 = m10 * other.m01 + m11 * other.m11;
    float tmp12 = m10 * other.m02 + m11 * other.m12 + m12;
    m00 = tmp00;
    m01 = tmp01;
    m02 = tmp02;
    m10 = tmp10;
    m11 = tmp11;
    m12 = tmp12;
    return this;
}
