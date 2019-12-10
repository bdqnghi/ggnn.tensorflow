/**
 * Sets this matrix to a rotation matrix that will rotate any vector in counter-clockwise direction around the z-axis.
 * @param radians the angle in radians.
 * @return This matrix for the purpose of chaining operations.
 */
public Matrix3 setToRotationRad(float radians) {
    float cos = (float) Math.cos(radians);
    float sin = (float) Math.sin(radians);
    float[] val = this.val;
    val[M00] = cos;
    val[M10] = sin;
    val[M20] = 0;
    val[M01] = -sin;
    val[M11] = cos;
    val[M21] = 0;
    val[M02] = 0;
    val[M12] = 0;
    val[M22] = 1;
    return this;
}
