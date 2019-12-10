/**
 * Sets this matrix to a translation matrix.
 * @param translation The translation vector.
 * @return This matrix for the purpose of chaining operations.
 */
public Matrix3 setToTranslation(Vector2 translation) {
    float[] val = this.val;
    val[M00] = 1;
    val[M10] = 0;
    val[M20] = 0;
    val[M01] = 0;
    val[M11] = 1;
    val[M21] = 0;
    val[M02] = translation.x;
    val[M12] = translation.y;
    val[M22] = 1;
    return this;
}
