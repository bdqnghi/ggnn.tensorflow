/**
 * Postmultiplies this matrix with a (counter-clockwise) rotation matrix. Postmultiplication is also used by OpenGL ES' 1.x
 * glTranslate/glRotate/glScale.
 * @param radians The angle in radians
 * @return This matrix for the purpose of chaining.
 */
public Matrix3 rotateRad(float radians) {
    if (radians == 0)
        return this;
    float cos = (float) Math.cos(radians);
    float sin = (float) Math.sin(radians);
    float[] tmp = this.tmp;
    tmp[M00] = cos;
    tmp[M10] = sin;
    tmp[M20] = 0;
    tmp[M01] = -sin;
    tmp[M11] = cos;
    tmp[M21] = 0;
    tmp[M02] = 0;
    tmp[M12] = 0;
    tmp[M22] = 1;
    mul(val, tmp);
    return this;
}
