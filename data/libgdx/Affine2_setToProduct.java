/**
 * Sets this matrix to the product of two matrices.
 * @param l Left matrix.
 * @param r Right matrix.
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 setToProduct(Affine2 l, Affine2 r) {
    m00 = l.m00 * r.m00 + l.m01 * r.m10;
    m01 = l.m00 * r.m01 + l.m01 * r.m11;
    m02 = l.m00 * r.m02 + l.m01 * r.m12 + l.m02;
    m10 = l.m10 * r.m00 + l.m11 * r.m10;
    m11 = l.m10 * r.m01 + l.m11 * r.m11;
    m12 = l.m10 * r.m02 + l.m11 * r.m12 + l.m12;
    return this;
}
