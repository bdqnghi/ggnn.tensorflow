/**
 * Premultiplies this matrix with the provided matrix and stores the result in this matrix. For example:
 *
 * <pre>
 * A.preMul(B) results in A := BA
 * </pre>
 * @param other The other Matrix to multiply by
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 preMul(Affine2 other) {
    float tmp00 = other.m00 * m00 + other.m01 * m10;
    float tmp01 = other.m00 * m01 + other.m01 * m11;
    float tmp02 = other.m00 * m02 + other.m01 * m12 + other.m02;
    float tmp10 = other.m10 * m00 + other.m11 * m10;
    float tmp11 = other.m10 * m01 + other.m11 * m11;
    float tmp12 = other.m10 * m02 + other.m11 * m12 + other.m12;
    m00 = tmp00;
    m01 = tmp01;
    m02 = tmp02;
    m10 = tmp10;
    m11 = tmp11;
    m12 = tmp12;
    return this;
}
