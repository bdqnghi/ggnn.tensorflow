/**
 * Postmultiplies this matrix with a scale matrix. Postmultiplication is also used by OpenGL ES' 1.x
 * glTranslate/glRotate/glScale.
 * @param scale The vector to scale the matrix by.
 * @return This matrix for the purpose of chaining.
 */
public Matrix3 scale(Vector2 scale) {
    float[] tmp = this.tmp;
    tmp[M00] = scale.x;
    tmp[M10] = 0;
    tmp[M20] = 0;
    tmp[M01] = 0;
    tmp[M11] = scale.y;
    tmp[M21] = 0;
    tmp[M02] = 0;
    tmp[M12] = 0;
    tmp[M22] = 1;
    mul(val, tmp);
    return this;
}
