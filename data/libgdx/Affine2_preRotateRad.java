/**
 * Premultiplies this matrix with a (counter-clockwise) rotation matrix.
 * @param radians The angle in radians
 * @return This matrix for the purpose of chaining.
 */
public Affine2 preRotateRad(float radians) {
    if (radians == 0)
        return this;
    float cos = MathUtils.cos(radians);
    float sin = MathUtils.sin(radians);
    float tmp00 = cos * m00 - sin * m10;
    float tmp01 = cos * m01 - sin * m11;
    float tmp02 = cos * m02 - sin * m12;
    float tmp10 = sin * m00 + cos * m10;
    float tmp11 = sin * m01 + cos * m11;
    float tmp12 = sin * m02 + cos * m12;
    m00 = tmp00;
    m01 = tmp01;
    m02 = tmp02;
    m10 = tmp10;
    m11 = tmp11;
    m12 = tmp12;
    return this;
}
