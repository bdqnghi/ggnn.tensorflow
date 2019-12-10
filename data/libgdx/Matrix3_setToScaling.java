/**
 * Sets this matrix to a scaling matrix.
 * @param scale The scale vector.
 * @return This matrix for the purpose of chaining operations.
 */
public Matrix3 setToScaling(Vector2 scale) {
    float[] val = this.val;
    val[M00] = scale.x;
    val[M10] = 0;
    val[M20] = 0;
    val[M01] = 0;
    val[M11] = scale.y;
    val[M21] = 0;
    val[M02] = 0;
    val[M12] = 0;
    val[M22] = 1;
    return this;
}
