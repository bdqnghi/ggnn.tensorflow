/**
 * Sets this matrix to a rotation matrix that will rotate any vector in counter-clockwise direction around the z-axis.
 * @param radians The angle in radians.
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 setToRotationRad(float radians) {
    float cos = MathUtils.cos(radians);
    float sin = MathUtils.sin(radians);
    m00 = cos;
    m01 = -sin;
    m02 = 0;
    m10 = sin;
    m11 = cos;
    m12 = 0;
    return this;
}
