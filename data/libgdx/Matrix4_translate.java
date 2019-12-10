/**
 * Postmultiplies this matrix by a translation matrix. Postmultiplication is also used by OpenGL ES' 1.x
 * glTranslate/glRotate/glScale.
 * @param x Translation in the x-axis.
 * @param y Translation in the y-axis.
 * @param z Translation in the z-axis.
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 translate(float x, float y, float z) {
    tmp[M00] = 1;
    tmp[M01] = 0;
    tmp[M02] = 0;
    tmp[M03] = x;
    tmp[M10] = 0;
    tmp[M11] = 1;
    tmp[M12] = 0;
    tmp[M13] = y;
    tmp[M20] = 0;
    tmp[M21] = 0;
    tmp[M22] = 1;
    tmp[M23] = z;
    tmp[M30] = 0;
    tmp[M31] = 0;
    tmp[M32] = 0;
    tmp[M33] = 1;
    mul(val, tmp);
    return this;
}
