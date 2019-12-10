/**
 * Postmultiplies this matrix by a translation matrix. Postmultiplication is also used by OpenGL ES' 1.x
 * glTranslate/glRotate/glScale.
 * @param translation The translation vector.
 * @return This matrix for the purpose of chaining.
 */
public Matrix3 translate(Vector2 translation) {
    float[] val = this.val;
    tmp[M00] = 1;
    tmp[M10] = 0;
    tmp[M20] = 0;
    tmp[M01] = 0;
    tmp[M11] = 1;
    tmp[M21] = 0;
    tmp[M02] = translation.x;
    tmp[M12] = translation.y;
    tmp[M22] = 1;
    mul(val, tmp);
    return this;
}
