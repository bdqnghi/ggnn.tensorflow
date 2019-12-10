/**
 * Postmultiplies this matrix with a scale matrix. Postmultiplication is also used by OpenGL ES' 1.x
 * glTranslate/glRotate/glScale.
 * @param scaleX The scale in the x-axis.
 * @param scaleY The scale in the y-axis.
 * @param scaleZ The scale in the z-axis.
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 scale(float scaleX, float scaleY, float scaleZ) {
    tmp[M00] = scaleX;
    tmp[M01] = 0;
    tmp[M02] = 0;
    tmp[M03] = 0;
    tmp[M10] = 0;
    tmp[M11] = scaleY;
    tmp[M12] = 0;
    tmp[M13] = 0;
    tmp[M20] = 0;
    tmp[M21] = 0;
    tmp[M22] = scaleZ;
    tmp[M23] = 0;
    tmp[M30] = 0;
    tmp[M31] = 0;
    tmp[M32] = 0;
    tmp[M33] = 1;
    mul(val, tmp);
    return this;
}
