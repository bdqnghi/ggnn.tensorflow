/**
 * Sets this matrix to a rotation matrix that will rotate any vector in counter-clockwise direction around the z-axis.
 * @param cos The angle cosine.
 * @param sin The angle sine.
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 setToRotation(float cos, float sin) {
    m00 = cos;
    m01 = -sin;
    m02 = 0;
    m10 = sin;
    m11 = cos;
    m12 = 0;
    return this;
}
